#include <iostream>
#include <mutex>
#include <thread>
#include <chrono>
using namespace std;

void addMoney(int &money, int threadNumber, std::timed_mutex &m)
{
    for (int i = 0; i < 100; i++)
    {
        if (m.try_lock_for(std::chrono::seconds(1)))
        {
            std::this_thread::sleep_for(std::chrono::seconds(5));
            money++;
            m.unlock();
        }
        else
        {
            cout << "thread " << threadNumber << "not active" << endl;
        }
    }
}

int main()
{
    int money{10};
    std::timed_mutex m;

    std::thread t1(addMoney, std::ref(money), 0, std::ref(m));
    std::thread t2(addMoney, std::ref(money), 1, std::ref(m));
    t1.join();
    t2.join();
    cout << "The amount : " << money << endl;
    return 0;
}