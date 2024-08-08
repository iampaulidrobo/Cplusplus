#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

void run(int x)
{
    while (x-- > 0)
        cout << x << endl;

    cout << "thread finished" << endl;
}
int main()
{

    std::thread t1(run, 10);
    cout << "main()" << endl;
    //wait till the thread is finished
    //t1.join();
    //detaching the thread and taking into consideration what has been done so far,later it might finish
     t1.detach();
    cout << "main() after" << endl;
    //the thread detached is finished in this time
    std::this_thread::sleep_for(chrono::seconds(5));
    return 0;
}