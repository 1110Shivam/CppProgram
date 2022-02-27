// print armstrong from 1 to n using for loop

#include<iostream>
using namespace std;

int main(){
	int num,i=1,digit,sum;
	cout<<"Enter the Number = ";
	cin>>num;
    
	cout<<"Armstrong Numbers Between"
    " 1 And "<<num<<" Are"<<endl;


	for(i=1;i<=num;i++){
		sum = 0;
		for(int num = i;num>0;num/=10){
			digit = num%10;
			sum = sum+digit*digit*digit;
		}
		if(sum == i){
			cout<<i<<endl;
		}
	}
    
    return 0;
}