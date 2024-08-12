#include <iostream>
#include <mutex>
#include <thread>

using namespace std;
void addMoneyy(int &money, std::mutex &m1)
{
    m1.lock();
    for (int i = 0; i < 1000000; i++)
    {
        money++;
    }
    m1.unlock();
}

void addMoney(int &money, std::mutex &m1, std::mutex &m2)
{
    for (int i = 0; i < 1000; i++)
    {
        if (std::try_lock(m1, m2))
        {
            money++;
            m1.unlock();
            m2.unlock();
        }
        else
        {
            std::cout << "m1 is locked,so none locked by std::try_lock and returning 1" << std::endl;
        }
    }
}

int main()
{
    int money{10};
    std::mutex m1, m2;
    //m2 index number is 1 that is also true in bool
    std::thread t1(addMoneyy, std::ref(money), std::ref(m2));
    std::thread t2(addMoney, std::ref(money), std::ref(m2), std::ref(m2));
    t1.join();
    t2.join();
    cout << "The amount : " << money << endl;
    return 0;
}
// std::try_lock() In C++11 Threading
// 1. std::try_lock() tries to lock all the lockable objects passed in it one by one in given order.
// SYNTAX: std::try_lock(m1, m2,m3,m4.., mn); v
// 2. On success this function returns - 1 otherwise it will return O-based mutex index number which it o
// 3. If it fails to lock any of the mutex then it will release all the mutex it locked before.
// 4. If a call to try_lock results in an exception, unlock is called for any locked objects before rethrowin