#include <iostream>
using namespace std;

float Fahrenheit(float cel){
    float fah;
    fah = ((cel * 9)/5) + 32;
    return(fah);
}

int main()
{
 float cel;
 cout<<"Enter "
    "Temperature In Celsius = ";
 cin>>cel;
 cout<<"Temperature"
 " In Fahrenheit = "<<Fahrenheit(cel);

 return 0;
 
}