#include <iostream>
using namespace std;

int main()
{
    int num,i=1;
    float temp,sum=0,aver;

    cout<<"How many no "
        "you want to enter = ";
    cin>>num;
    cout<<"Enter "<<num<<" no = ";

    while(i<=num){
        cin>>temp;
        sum += temp;
        i++;
    }
    cout<<"Sum = "<<sum<<endl;
    aver = sum/num;
    cout<<"Average = "<<aver;
}