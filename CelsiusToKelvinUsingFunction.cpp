#include <iostream>
using namespace std;

float kelvin(float cel){
    float kel;
    kel = cel + 273.15;
    return(kel);
}

int main(){
    float cel;
    cout<<"Enter temperature"
          " in Celsius = ";
    cin>>cel;
    cout<<"Temperature in"
    " Kelvin = "<<kelvin(cel);
    
    return 0;
}