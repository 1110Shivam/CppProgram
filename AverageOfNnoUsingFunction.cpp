#include <iostream>
using namespace std;

int Average(int num)
{
    float sum = 0, temp, aver;
    cout << "Enter " << num << " no ";
    for (int i = 0; i < num; i++)
    {
        cin >> temp;
        sum += temp;
    }
    cout << "Sum = " << sum << endl;
    aver = sum / num;
    cout << "Average = " << aver;
    return 0;
}

int main()
{
    int num;
    cout << "How many no you want to enter = ";
    cin >> num;
    Average(num);
    return 0;
}