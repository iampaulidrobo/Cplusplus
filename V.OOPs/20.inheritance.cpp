//https://www.geeksforgeeks.org/inheritance-in-c/

/*inheritance concept
set data and get data by creating the object of the Drived class only
constructor call sequence
ambiguity

*/
#include <iostream>

using namespace std;

class BaseOne
{
private:
  int data_one;
public:
  BaseOne(/* args */);
  ~BaseOne();
  void setData(int data_one);
  void getData();
  void display();
};

BaseOne::BaseOne(/* args */)
{std::cout<<"The constructor of the BaseOne is called"<<std::endl;

}

BaseOne::~BaseOne()
{std::cout<<"The destructor of the BaseOne is called"<<std::endl;
}
void BaseOne::setData(int data_one)
{this->data_one=data_one;
}
void BaseOne::getData()
{std::cout<<"The value of data_one is: "<<data_one<<std::endl;
}
void BaseOne::display()
{std::cout<<"The value of data_one from display{ambiguity function} in base is: "<<data_one<<std::endl;
}

class BaseTwo
{
private:

public:
  BaseTwo(/* args */);
  ~BaseTwo();

};

BaseTwo::BaseTwo(/* args */)
{std::cout<<"The constructor of the BaseTwo is called"<<std::endl;
}

BaseTwo::~BaseTwo()
{std::cout<<"The destructor of the BaseTwo is called"<<std::endl;
}

class Drived: BaseTwo,public BaseOne //if nothing is mentioned then by default private
{
private:
 

public:
  Drived(/* args */);
  ~Drived();
    void display();
    

};

Drived::Drived(/* args */)
{std::cout<<"The constructor of the Drived is called"<<std::endl;
}

Drived::~Drived()
{std::cout<<"The destructor of the Drived is called"<<std::endl;
}
void Drived::display()
{BaseOne::display();
}
int main(){

Drived dobject;
dobject.setData(2);
dobject.getData();
dobject.display();

  return 0;
}

