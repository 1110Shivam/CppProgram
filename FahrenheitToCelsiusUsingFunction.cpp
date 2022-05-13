#include <iostream>
using namespace std;

float Celsius(float fah){
    float cel;
    cel = (fah - 32.0) * 5.0 / 9.0;
    return(cel);
}

int main()
{
 float fah;
 cout<<"Enter "
    "Temperature In Fahrenheit = ";
 cin>>fah;
 cout<<"Temperature"
 " In Celsius = "<<Celsius(fah);

 return 0;
 
}