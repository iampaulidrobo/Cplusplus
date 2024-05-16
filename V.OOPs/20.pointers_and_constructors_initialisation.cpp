#include <iostream>

using namespace std;

class BaseOne
{
private:
  

public:
int data_baseone;
  BaseOne(int data_baseone);
  ~BaseOne();
};

BaseOne::BaseOne(int data_baseone)
{
  this->data_baseone = data_baseone;
}

BaseOne::~BaseOne()
{
}

class BaseTwo
{
private:
  

public:
int data_basetwo;
  BaseTwo(int data_basetwo);
  ~BaseTwo();
};

BaseTwo::BaseTwo(int data_basetwo)
{
  this->data_basetwo = data_basetwo;
}

BaseTwo::~BaseTwo()
{
}
class Drived : public BaseOne, public BaseTwo
{
private:
  int data_drive;

public:
  Drived(int data_drive,int data_baseone,int data_basetwo);
  ~Drived();
  void display();
};

Drived::Drived(int data_drive,int data_baseone,int data_basetwo) :BaseOne(data_baseone),BaseTwo(data_basetwo)
{
  this->data_drive = data_drive;
}

Drived::~Drived()
{
}

void Drived::display(){
std::cout<<"The value for data BASEONE is: "<<data_baseone<<std::endl;
std::cout<<"The value for data BASETWO is: "<<data_basetwo<<std::endl;
std::cout<<"The value for data DRIVED is:  "<<data_drive<<std::endl;

}
int main()
{
  // Drived drived(3,1,2);
  Drived *ptr = new Drived(3,1,2); //can also set the number fo items,array
  // (*ptr).display();
  ptr->display();

  return 0;
}
