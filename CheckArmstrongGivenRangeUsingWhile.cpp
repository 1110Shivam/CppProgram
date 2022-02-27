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
    while (i<=num2)
    {
        sum = 0;
        int num = i;
        while (num>0)
        {
            digit = num%10;
			sum = sum+digit*digit*digit;

            num/=10;
        }
        if(sum == i)
            cout<<i<<endl;
        i++;
        
    }
    
    return 0;
}