
//constructors and destuctors

#include <iostream>

using namespace std;

class Age
{
private:
  int age;

public:
  Age(/* args */);
  Age(int age);
  Age(Age &obj);
  ~Age();
  void setData(int age);
  void getData();
  
};
Age::Age(/* args */)
{std::cout<<"The constructor is called: "<<std::endl;
}
Age::Age(int age)
{this->age=age;
}
Age::Age(Age &obj)
{this->age=obj.age;  //member wise initialisation
}

Age::~Age()
{std::cout<<"The destructor is called: "<<std::endl;
}
void Age::setData(int age)
{
  this->age = age;
}
void Age::getData()
{
  std::cout << "The current age is: " << age << std::endl;
}


int main()
{
  Age Piyush;
  Piyush.setData(27);
  Piyush.getData();
  Age Ayush(25);
  Ayush.getData();
  // Age Ram = Age(31);   //explicit declration doesnt work if you incorporate copy cosntrcutor
  // Ram.getData();

  // Age &addressofRam=Ram;

  Age Ram(Piyush);
  Ram.getData();


  return 0;
}
