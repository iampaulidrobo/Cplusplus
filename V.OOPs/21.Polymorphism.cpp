// Compile Time Polymorphism

// In compile-time polymorphism, it is already known which function will run. Compile-time polymorphism is also called early binding, which means that you are already bound to the function call and you know that this function is going to run. There are two types of compile-time polymorphism:

//     Function Overloading

// This is a feature that lets us create more than one function and the functions have the same names but their parameters need to be different. If function overloading is done in the program and function calls are made the compiler already knows that which functions to execute.

//     Operator Overloading

// This is a feature that lets us define operators working for some specific tasks. For example, we can overload the operator “+” and define its functionality to add two strings. Operator loading is also an example of compile-time polymorphism because the compiler already knows at the compile time which operator has to perform the task.

// Run Time Polymorphism

// In the run-time polymorphism, the compiler doesn’t know already what will happen at run time. Run time polymorphism is also called late binding. The run time polymorphism is considered slow because function calls are decided at run time. Run time polymorphism can be achieved from the virtual function.

//     Virtual Function

// A function that is in the parent class but redefined in the child class is called a virtual function. “virtual” keyword is used to declare a virtual function.
#include<iostream>
using namespace std;

class Base
{
private:
  /* data */
public:
int data_base;
  Base(/* args */);
  ~Base();
  void display();
  void virtual print();
};

Base::Base(/* args */)
{
}

Base::~Base()
{
}
void Base::display(){
  std::cout<<"[display]The value of data for base is: "<<data_base<<std::endl;

}
void Base::print(){
  std::cout<<"[print]The value of data for base is: "<<data_base<<std::endl;

}
class Drived:public Base
{
private:
  /* data */
public:
 int data_drive;
  Drived(/* args */);
  ~Drived();
  void display();
  void  print();
};

Drived::Drived(/* args */)
{
}

Drived::~Drived()
{
}
void Drived::display(){
  std::cout<<"[display]The value of data for BASE is: "<<data_base<<" and drive is: "<<data_drive<<std::endl;

}
void Drived::print(){
  std::cout<<"[print]The value of data for BASE is: "<<data_base<<" and drive is: "<<data_drive<<std::endl;

}
int main(){
    //If there is obj of drive in the pointer of base class then it acts as the pointer access for the base class 
    Base obj_base;
    Drived obj_derived;
    Base * base_class_pointer;
    base_class_pointer = &obj_derived; // Pointing base class pointer to derived class

    base_class_pointer->data_base=2;
    // base_class_pointer->data_drive=3;
    base_class_pointer->display();
    



    Drived * derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->data_base = 9448;
    derived_class_pointer->data_drive = 98;
    derived_class_pointer->display();


    base_class_pointer->print();
    derived_class_pointer->print();

    return 0;
}
