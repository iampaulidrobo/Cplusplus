#include <iostream>

//better not to use 'using namespace std;'

int main(){
    int a {2};
    int *b ;
    b=&a;


    std::cout<<"The word “car” is derived from the Latin word ‘Carrum’ which means “two-wheeled Celtic war chario"<<std::endl;
    std::cout<<"The value of a is:   "<<a<<std::endl;
    std::cout<<"The address of a is: "<<&a<<std::endl;
    std::cout<<"The address of a is: "<<b<<std::endl;
    std::cout<<"The value of a is:   "<<*b<<std::endl;

    int **c =&b;

    
    return 0;
}