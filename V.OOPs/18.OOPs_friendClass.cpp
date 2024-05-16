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
  friend class AgeTests;
  
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

class AgeTests
{
private:
  /* data */
public:
  AgeTests(/* args */);
  ~AgeTests();
  bool adultFranchise(Age&obj);
  bool canLegallyGetMarried(Age&obj);
};

AgeTests::AgeTests(/* args */)
{
}

AgeTests::~AgeTests()
{
}

bool AgeTests::adultFranchise(Age&obj)
{if(obj.age>=18) return true;
return false;
}
bool AgeTests::canLegallyGetMarried(Age&obj)
{if(obj.age>=21)return true;
return false;
}
int main()
{
  Age Piyush;
  Piyush.setData(27);
  Piyush.getData();
  AgeTests age_tests;
  std::cout<<"Is the person eligible for voting: "<<age_tests.adultFranchise(Piyush)<<std::endl;
  std::cout<<"Is the person eligible for Marriage: "<<age_tests.canLegallyGetMarried(Piyush)<<std::endl;
 

  return 0;
}
