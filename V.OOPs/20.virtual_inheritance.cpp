#include <iostream>

using namespace std;

class Age
{
private:
public:
  int age = 5;
  Age(/* args */);
  ~Age();
  void setData(int age);
  void getData();
};

Age::Age(/* args */)
{
  std::cout << "Age constructor" << std::endl;
}

Age::~Age()
{
  std::cout << "Age destructor" << std::endl;
}
void Age::setData(int age)
{
  this->age = age;
}
void Age::getData()
{
  std::cout << "The current age is: " << age << std::endl;
}
class Planets : virtual public Age
{
private:
  /* data */
public:
  int planet_age = age * 5;
  Planets(/* args */);
  ~Planets();
  void getPlanetAge();
};

Planets::Planets(/* args */)
{
  std::cout << "Planet constructor" << std::endl;
}

Planets::~Planets()
{
  std::cout << "Planets destructor" << std::endl;
}
void Planets::getPlanetAge()
{
  std::cout << "The age of the planet is: " << planet_age << std::endl;
}

class Universe : virtual public Age
{
private:
  /* data */
public:
  int universe_age = age * 100;
  Universe(/* args */);
  ~Universe();
  void getUniverseAge();
};

Universe::Universe(/* args */)
{
  std::cout << "Universe constructor" << std::endl;
}

Universe::~Universe()
{
  std::cout << "Universe destructor" << std::endl;
}
void Universe::getUniverseAge()
{
  std::cout << "The age of the Universe is: " << universe_age << std::endl;
}
class Database : public Planets, public Universe
{
private:
  /* data */
public:
  Database(/* args */);
  ~Database();
  void getDatabase();
};

Database::Database(/* args */)
{
  std::cout << "Database constructor" << std::endl;
}

Database::~Database()
{
  std::cout << "Databse destructor" << std::endl;
}
void Database::getDatabase()
{
  std::cout << "The age is: " << age << std::endl;
  std::cout << "The age of the planet is: " << planet_age << std::endl;
  std::cout << "The age of the universe is: " << universe_age << std::endl;
}
int main()
{
  Database database;
  database.getDatabase();

  return 0;
}