
#include <iostream>
#include <thread>
#include <chrono>
#include <algorithm>
#include <future>
using namespace std;
using namespace std::chrono;

typedef long int ull;

ull findOdd(ull start, ull end)
{ cout<<"threadID: " <<std::this_thread::get_id()<<endl;
    ull OddSum = 0;
    for (ull i = start; i <= end; i++)
    {
        if (i & 1)
            OddSum += 1;
    }
   return OddSum;
}

int main()
{
    ull start = 0;
    ull end = 1900000000;
    cout<<"threadID: " <<std::this_thread::get_id()<<endl;
   // std::future<ull> OddSum=std::async(std::launch::async,findOdd,start,end);
    std::future<ull> OddSum=std::async(std::launch::deferred,findOdd,start,end);

    
    cout << "result: " << OddSum.get() << endl;
   

    return 0;
}