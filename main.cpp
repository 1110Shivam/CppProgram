#include <iostream>
using namespace std;
class Kel{
    public:
    float cel;
    void get(){
        cout<<"Enter temperature"
        " in Celsius = ";
        cin>>cel;
    }
    void kelvin(){
        cout<<"Temperature in"
    " Kelvin = "<<cel + 273.15;
    }

};
int main(){
    Kel obj;
    obj.get();
    obj.kelvin();
    return 0;
}