#include <iostream>

// better not to use 'using namespace std;'

int main()
{
    int num1{5}, num2{13};
    std::cout << "The word “car” is derived from the Latin word ‘Carrum’ which means “two-wheeled Celtic war chario" << std::endl;
    std::cout << "num1 + num2 = " << num1 + num2 << std::endl;

    std::cout << "The operations in C++ are: " << std::endl;
    int a = 4, b = 3;//Assignement operations
    std::cout << "Arithmetic Operations: " << std::endl;
    std::cout << "The value of a + b is : " << a + b << std::endl;
    std::cout << "The value of a - b is : " << a - b << std::endl;
    std::cout << "The value of a / b is : " << a / b << std::endl;
    std::cout << "The value of a * b is : " << a * b << std::endl;
    std::cout << "The value of a % b is : " << a % b << std::endl;
    std::cout << "The value of a++ is :   " << a++ << std::endl;
    std::cout << "The value of a-- is :   " << a-- << std::endl;
    std::cout << "The value of ++a is :   " << ++a << std::endl;
    std::cout << "The value of --a is :   " << --a << std::endl;

    std::cout << "Comparison Operations: " << std::endl;
    std::cout << "The value of a > b is : " << (a > b) << std::endl;
    std::cout << "The value of a < b is : " << (a < b) << std::endl;
    std::cout << "The value of a == b is : " <<(a == b) << std::endl;
    std::cout << "The value of a != b is : " <<(a != b) << std::endl;
    std::cout << "The value of a <= b is : " <<(a <= b) << std::endl;
    std::cout << "The value of a>=b is :   " <<(a >= b )<< std::endl;

    std::cout << "Logical  Operations: " << std::endl;
    std::cout << "The value of a > b && b!=0 is : " << ((a > b) && b!=0) << std::endl;
    std::cout << "The value of a < b || b!=0 is : " << ((a < b) || b!=0) << std::endl;
    std::cout << "The value of !(a == b) is : " <<(!(a == b)) << std::endl;


    return 0;
}