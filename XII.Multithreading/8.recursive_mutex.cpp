#include <iostream>
#include <thread>
#include <mutex>

using namespace std;
// EXAMPLE 1: With Recursion

std::recursive_mutex m1;
int buffer = 0;

void recursion(char c,
               int loopFor)
{
    if (loopFor < 0)
        return;
    m1.lock();
    cout << "Locked By ThreadID:" << c << " " << buffer++ << endl;
    recursion(c, --loopFor);
    m1.unlock();

    cout << "Unlocked By ThreadID:" << c << endl;
}
int main()
{
    thread t1(recursion, '1', 2);
    thread t2(recursion, '2', 2);
    t1.join();
    t2.join();
    return 0;
}