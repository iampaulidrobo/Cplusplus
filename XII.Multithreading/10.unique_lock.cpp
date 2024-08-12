#include <iostream>
#include <mutex>
#include <thread>

using namespace std;

void addMoney(int &money, std::mutex &m)
{   //same as lock_guar but it has other additional feathures like.
//eg defer lock to do some computation and than only locking the thread based upon that.Hence taking
    std::unique_lock<mutex> lock(m,std::defer_lock);
    money++;
    lock.lock()//explicitly lock the mutex
    cout << money << endl;
    std::this_thread::sleep_for(chrono::seconds(2));
    
}

int main()
{
    int money{0};
    std::mutex m;
    std::thread t1(addMoney, std::ref(money), std::ref(m));
    std::thread t2(addMoney, std::ref(money), std::ref(m));
    t1.join();
    t2.join();
    cout << "the amount: " << money << endl;
    return 0;
}