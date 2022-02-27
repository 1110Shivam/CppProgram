// print armstrong from 1 to n using do while loop

#include<iostream>
using namespace std;

int main(){
	int num,i=1,digit,sum;
	cout<<"Enter the Number = ";
	cin>>num;
    
	cout<<"Armstrong Numbers Between"
    " 1 And "<<num<<" Are"<<endl;

    do
    {
        sum = 0;
        int t = i;
        do
        {
            digit = t%10;
			sum = sum+digit*digit*digit;

            t/=10;
        }while (t>0);
        if(sum == i)
            cout<<i<<endl;
        i++;
        
    }while (i<=num);
    
    return 0;
}