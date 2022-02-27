#include <iostream>
using namespace std;
class Average
{
    float num1, num2, num3;
public:
    void get()
    {
        cout << "Enter first no = ";
        cin >> num1;
        cout << "Enter second no = ";
        cin >> num2;
        cout << "Enter third no = ";
        cin >> num3;
    }
    void aver()
    {
        float average;
        average = (num1 + num2 + num3) / 3;
        cout << "Average = " << average;
    }
};

int main()
{
    Average obj;
    obj.get();
    obj.aver();
}