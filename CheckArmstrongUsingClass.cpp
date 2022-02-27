// program to check given no is armstrong or not using class
#include <iostream>
using namespace std;

class Main
{
    int num, temp, rem, sum = 0;

public:
    void Armstrong()
    {
        cout << "Enter a three-digit no = ";
        cin >> num;

        for (temp = num; temp > 0; temp /= 10)
        {
            rem = temp % 10;
            sum += rem * rem * rem;
        }

        if (sum == num)
            cout << num << " is an Armstrong no.";
        else
            cout << num << " is not an Armstrong no.";
    }
};
int main()
{
    Main obj;
    obj.Armstrong();
    return 0;
}