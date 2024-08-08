#include <iostream>
#include <mutex>
#include <thread>

using namespace std;

void addMoney(int &money, std::mutex &m)
{
    for (int i = 0; i < 1000; i++)
    {
        if (m.try_lock())
        {
            money++;
            m.unlock();
        }
    }
}

int main()
{
    int money{10};
    std::mutex m;
    std::thread t1(addMoney, std::ref(money), std::ref(m));
    std::thread t2(addMoney, std::ref(money), std::ref(m));
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