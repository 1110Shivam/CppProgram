#include <iostream>
using namespace std;
class Fahrenheit{
    public:
    float cel,fah;
    void get(){
        cout<<"Enter "
        "Temperature In Celsius = ";
        cin>>cel;
    }
    void fahrenheit(){
        fah = ((cel * 9)/5) + 32;
        cout<<"Temperature"
        " In Fahrenheit = "<<fah;
    }
};

int main(){
    Fahrenheit obj;
    obj.get();
    obj.fahrenheit();
    return 0;
}