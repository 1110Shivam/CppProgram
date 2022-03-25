#include <iostream>
using namespace std;
class Celsius{
    public:
    float kel,cel;
    void get(){
        cout<<"Enter "
        "Temperature In Kelvin = ";
        cin>>kel;
    }
    void celsius(){
        cel = kel - 273.15;
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