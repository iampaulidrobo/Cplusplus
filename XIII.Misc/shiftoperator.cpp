// C++ Program to demonstrate use
// of left shift  operator
#include <iostream>
using namespace std;

// Driver code
int main()
{
    // a = 5(00000101), b = 9(00001001)
    unsigned char a = 5, b = 9;

    // The result is 00001010
    cout << "a<<1 = " << (a << 1) << endl;

    // The result is 00010010
    cout << "b<<1 = " << (b << 1) << endl;
    //not for negative numbers and more the the bits availble.
   // cout << "2 >> -5 = " << (2 >> -5) << endl;
   // cout << "3 << 65" << (3 << 65) << endl;

    cout << "2^5 using leftshift" << (1 << 5) << endl;
    return 0;
}
