#include <iostream>
using namespace std;

float Celsius(float kel)
{
    float cel;
    cel = kel - 273.15;
    return(cel);
}

int main()
{
    float kel;
    cout<<"Enter "
    "Temperature In Kelvin = ";
    cin>>kel;
    cout<<"Temperature "
    "In Celsius = "<<Celsius(kel);
    return 0;
}