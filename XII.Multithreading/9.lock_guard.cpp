#include <iostream>
#include <mutex>
#include <thread>

using namespace std;

void addMoney(int &money, std::mutex &m)
{   //automatic lock and unlock after the parenthesis are closed
//valid for the function//user friendly
    std::lock_guard<mutex> lock(m);
    money++;
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