#include <iostream>
#include <mutex>
#include <thread>

using namespace std;

void addMoney(int &money, std::mutex &m)
{
    m.lock();
    std::this_thread::sleep_for(chrono::seconds(2));
    money++;
    m.unlock();
}

int main()
{
    int money{0};
    std::mutex m;
    std::thread t1(addMoney, std::ref(money), std::ref(m));
    std::thread t2(addMoney, std::ref(money), std::ref(m));
    t1.join();
    t2.detach();
    cout << "the amount: " << money << endl;
    return 0;
}