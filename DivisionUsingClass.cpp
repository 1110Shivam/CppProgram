#include <iostream>
using namespace std;

class Division
{
    float A, B;

public:
    void get()
    {
        cout << "Enter the value of A = ";
        cin >> A;
        cout << "Enter the value of B = ";
        cin >> B;
    }
    float div()
    {
        return A / B;
    }
};
int main()
{
    Division Div;
    Div.get();
    cout << endl
         << "Result = " << Div.div();

    //  return 0;
}