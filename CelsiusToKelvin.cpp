#include <iostream>
using namespace std;

int main()
{
    float cel, kel;
    cout << "Enter temperature in Celsius = ";
    cin >> cel;

    kel = cel + 273.15;

    cout << "Temperature in Kelvin = "<< kel;
    return 0;
}