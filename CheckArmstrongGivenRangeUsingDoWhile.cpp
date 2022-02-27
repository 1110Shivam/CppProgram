// print armstrong in the given range using do while loop

#include<iostream>
using namespace std;

int main(){
	int num1,num2,i,digit,sum;
	cout<<"Enter First Number = ";
	cin>>num1;
	cout<<"Enter Second Number = ";
	cin>>num2;
    
	cout<<"Armstrong Numbers Between "
    <<num1<<" And "<<num2<<" Are"<<endl;

    i = num1;
    do
    {
        sum = 0;
        int num = i;
        do
        {
            digit = num%10;
			sum = sum+digit*digit*digit;

            num/=10;
        }while (num>0);
        if(sum == i)
            cout<<i<<endl;
        i++;
        
    }while (i<=num2);
    
    return 0;
}