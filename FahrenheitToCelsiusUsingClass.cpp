#include <iostream>
using namespace std;
class Celsius{
    public:
    float cel,fah;
    void get(){
        cout<<"Enter "
        "Temperature In Fahrenheit = ";
        cin>>fah;
    }
    void celsius(){
        cel = (fah - 32.0) * 5.0 / 9.0;
        cout<<"Temperature"
        " In Celsius = "<<cel;
    }
};

int main(){
    Celsius obj;
    obj.get();
    obj.celsius();
    return 0;
}