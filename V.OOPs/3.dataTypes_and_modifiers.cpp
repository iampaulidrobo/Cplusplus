/*
DISPLAY THE DETAILS FOR THE TATA NEXON*/


#include <iostream>
#include <iomanip>   //for setw-setwidth function
/*
--------------------------------------------------------------------------------------------------------------------
DATATYPE    | SIZE       | RANGE
------------|------------|------------------------------------------------------------------------------------------
int / int32 | 2/4 bytes  | 2^32 -4294967296,-2147483648 to 2147483647                           //positive people always compromises
float       | 4 bytes    | 2^32 -
double      | 8 bytes    | 2^64 -
char        | 1 bytes    | 2^8  -
boolean     | 1 bytes    | 2^8  -
wchar_t     | 2 bytes    | 2^8  -
*/
/*
MODIFIERS
signed     | 4 bytes
unsigned   | 4 bytes
short      | 2 bytes
long       | 4 bytes
ONLY AVAILABLE FOR INT,DOUBLE,CHAR
*/

int main()
{   int car_id=0;
    float car_price_in_lakhs = 8.10;
    double max_car_mileage = 24.08;
    double max_car_engine_capcity = 1497;
    char car_fuel_type = 'p'; // In C++, an integer value is stored in a char variable rather than the character itself.
    bool does_car_have_automatic_transmission = true;
    //wchar_t test = L'ם';    //unused variable

    std::cout << "The average car contains over 30,000 parts. It’s a guarantee at least one of them will break" << std::endl;
    std::cout << "Price(L):                      " << std::setw(10) << car_price_in_lakhs << std::endl;
    std::cout << "Mileage(kmpl):                 " << std::setw(10) << std::setprecision(4) << std::fixed << max_car_mileage << std::endl;
    std::cout << "Engine Capacity(cc):           " << std::setw(10) << max_car_engine_capcity << std::endl;
    std::cout << "Fuel Type(petrol/diesel):      " << car_fuel_type << std::endl;
    std::cout << "Automatic Transmission:        " << does_car_have_automatic_transmission << std::endl;

    return 0;
}