// print armstrong in the given range using for loop

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

	for(i=num1;i<=num2;i++){
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