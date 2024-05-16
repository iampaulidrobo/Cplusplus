#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    while (a > 0 && b > 0) {
        if (a > b) {
            a = a % b;
        }
        else {
            b = b % a;
        }
    }
    if (a == 0) {
        return b;
    }
    return a;
}
int LCM(int a, int b) 
{ 
    int greater = max(a, b); 
    int smallest = min(a, b); 
    for (int i = greater; ; i += greater) { 
        if (i % smallest  == 0) 
            return i; 
    } 
} 
int main()
{

    int a = 10;
    int b = 5;

    cout << "GCD without  __gcd(a, b): " << gcd(10, 5);

    cout << "LCM of " << a << " and " 
         << b << " is " << LCM(a, b); 
    return 0;
}