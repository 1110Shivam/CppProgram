#include <iostream>
using namespace std;

int main(){
    float fah,cel;
    cout<<"Enter "
        "Temperature In Fahrenheit = ";
    cin>>fah;

    cel = (fah - 32.0) * 5.0 / 9.0;
    
    cout<<"Temperature"
        " In Celsius = "<<cel;

    return 0;
}