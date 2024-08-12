
#include <iostream>
#include <thread>
#include <chrono>
#include <algorithm>
#include <future>
using namespace std;
using namespace std::chrono;

typedef long int ull;

void findOdd(std::promise<ull> &&OddSumPromise, ull start, ull end)
{
    ull OddSum = 0;
    for (ull i = start; i <= end; i++)
    {
        if (i & 1)
            OddSum += 1;
    }
    OddSumPromise.set_value(OddSum);
}

int main()
{
    ull start = 0;
    ull end = 1900000000;
    std::promise<ull> OddSum;
    std::future<ull> OddFuture = OddSum.get_future();
    std::thread t1(findOdd, std::move(OddSum), start, end);
    cout << "Odd Sumis waiting for computation in the thread and thereafter will make the result available" << OddFuture.get() << endl;
    t1.join();

    return 0;
}