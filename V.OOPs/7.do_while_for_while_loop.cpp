#include <iostream>

// better not to use 'using namespace std;'

int main()
{
    int condition{10};
    std::cout << "The word “car” is derived from the Latin word ‘Carrum’ which means “two-wheeled Celtic war chario" << std::endl;
    do{
        std::cout << "{do-while loop}The value of condition is: " << condition << std::endl;
    }while(condition<0);
    for (auto i = 0; i < condition; i++)
    {

            std::cout << "{for loop}The value of i is: " << i << std::endl;

        
    }
    while(condition>0){
        std::cout << "{while loop}The value of condition is: " << condition << std::endl;
        condition--;
    }
    return 0;
}