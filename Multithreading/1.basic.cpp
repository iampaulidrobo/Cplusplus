#include <iostream>
#include<chrono>
#include<thread>
void OddSum(int start, int end, int &odd_sum)
{
    for (int i = start; i <= end; i++)
    {
        if (i % 2 != 0)
        {
            odd_sum++;
        }
    }
}
void EvenSum(int start, unsigned long long end, int &even_sum)
{
    for (int i = start; i <= end; i++)
    {
        if (i % 2 == 0)
        {
            even_sum++;
        }
    }
}
int main()
{
    int even_sum{0};
    int odd_sum{0};
    auto startTime = std::chrono::high_resolution_clock::now();

    OddSum(0, 1900000000, odd_sum);
    EvenSum(0, 1900000000, even_sum);

    auto endTime=std::chrono::high_resolution_clock::now();

    auto duration=std::chrono::duration_cast<std::chrono::microseconds>(endTime-startTime);
    std::cout<< "duration" << duration.count()/1000000 << std::endl;
    std::cout<< "Odd sum:" << odd_sum << std::endl;
    std::cout << "Even sum:" << even_sum << std::endl;


    
    // startTime = std::chrono::high_resolution_clock::now();
    std::thread t1(OddSum,0,1900000000,std::ref(odd_sum));
    // std::thread t2(EvenSum,0,1900000000,even_sum);
    t1.join();
    // t2.join();

    // endTime=std::chrono::high_resolution_clock::now();
    
    // duration=std::chrono::duration_cast<std::chrono::microseconds>(endTime-startTime);
    // std::cout<< "duration" << duration.count()/1000000 << std::endl;
    // std::cout<< "Odd sum:" << odd_sum << std::endl;
    // std::cout << "Even sum:" << even_sum << std::endl;

    return 0;
}