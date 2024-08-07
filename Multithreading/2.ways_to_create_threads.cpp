#include <iostream>
#include <mutex>
#include <thread>
#include<string>


void increaseCount(int number){

    
}
int main()
{
int number{0};
    std::thread t1(increaseCount,number);
    std::thread t2(increaseCount,number);

    t1.join();
    t2.join();

    return 0;
}