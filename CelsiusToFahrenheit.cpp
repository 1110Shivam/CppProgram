#include <iostream>
using namespace std;

int main(){
    float cel,fah;
    cout<<"Enter "
        "Temperature In Celsius = ";
    cin>>cel;

    fah = ((cel * 9)/5) + 32;
    
    cout<<"Temperature"
        " In Fahrenheit = "<<fah;

    return 0;
}