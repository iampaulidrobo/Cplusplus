/*
friend fucntion and friend class


*/
#include <iostream>

using namespace std;

class Age
{
private:
  int age;

public:
  Age(/* args */);
  ~Age();
  void setData(int age);
  void getData();
  bool friend adultfranchise(Age &obj);
};

Age::Age(/* args */)
{
}

Age::~Age()
{
}
void Age::setData(int age)
{
  this->age = age;
}
void Age::getData()
{
  std::cout << "The current age is: " << age << std::endl;
}

bool adultfranchise(Age &obj){
  if(obj.age>=18) return true;
  return false;
}
int main()
{
  Age Piyush;
  Piyush.setData(27);
  Piyush.getData();
 std::cout<<"Am I eligible for voting: "<<adultfranchise(Piyush)<<std::endl;
 

  return 0;
}