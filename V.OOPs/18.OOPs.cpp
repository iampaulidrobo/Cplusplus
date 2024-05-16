// OOPs concept increase the program readibility scalibilty
// In the following program we have 
// three functions 
// setData


//static count
//friend function
//friend class -not included as of now
/*INPROGRAM
Make a class cars with some parameters for the defining the car.

static count
friend function to access the private member of the class.
*/

/*OOP concept
classes variables and methods
setting parameters as private,so direct access is forbidden[encapsulation]-data hiding[abstract class-process hiding]
static variable and its display


///
friend fucntion and friend class


*/
#include <iostream>

using namespace std;

class Age
{
private:
  int age;
  static int count;

public:
  Age(/* args */);
  ~Age();
  void setData(int age);
  void getData();
  void getCount();
};

Age::Age(/* args */)
{
  count++;
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
void Age::getCount()
{
  std::cout << "The current count is: " << count << std::endl;
}
int Age::count;

int main()
{
  Age Piyush;
  Piyush.setData(27);
  Piyush.getData();
  Piyush.getCount();

  return 0;
}
