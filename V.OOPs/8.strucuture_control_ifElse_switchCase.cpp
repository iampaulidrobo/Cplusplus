#include <iostream>

// better not to use 'using namespace std;'
// sequence structure
// selection structure
// loop structure

int main()
{

    std::cout << "The word “car” is derived from the Latin word ‘Carrum’ which means “two-wheeled Celtic war chario" << std::endl;
    float price_of_car = 22.90;
    float my_saved_budget_per_year = 10.00;
    float this_year_budget{my_saved_budget_per_year};
    for (auto i = 0; i < 5; i++)
    {
        if (this_year_budget > price_of_car)
            std::cout << "You can buy it this year" << this_year_budget << std::endl; // avoid using equal comparison because of scale and precision in float/double datatypes

        else if (this_year_budget < price_of_car)
            std::cout << "Probably try next year as your budget: " << this_year_budget << std::endl;
        this_year_budget = this_year_budget + my_saved_budget_per_year;
    }

    std::cout << "Enter your age: " << std::endl;
    int age;
    std::cin >> age;
    switch (age)
    {
    case 18:
        std::cout << "You are 18 years of age" << std::endl;
        break;
    case 21:
        std::cout << "You are 21 years of age" << std::endl;
        break;
    default:
    std::cout << "No special case" << std::endl;

    }

    return 0;
}