#include <iostream>

// better not to use 'using namespace std;'

int main()
{

    std::cout << "The word “car” is derived from the Latin word ‘Carrum’ which means “two-wheeled Celtic war chario" << std::endl;
    for (auto i = 0; i < 10; i++)
    {
        
        if (i == 8)
            break;

        else{
            std::cout << "The value of i is: " <<i<<std::endl;
            continue;
        }
            
    }
    return 0;
}