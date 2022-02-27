// print armstrong from 1 to n using while loop

#include<iostream>
using namespace std;

int main(){
	int num,i=1,digit,sum;
	cout<<"Enter the Number = ";
	cin>>num;
    
	cout<<"Armstrong Numbers Between"
    " 1 And "<<num<<" Are"<<endl;

    while (i<=num)
    {
        sum = 0;
        int t = i;
        
        while (t>0)
        {
            digit = t%10;
			sum = sum+digit*digit*digit;

            t/=10;
        }
        if(sum == i)
            cout<<i<<endl;
        i++;
        
    }
    
    return 0;
}