// program to check given no is armstrong or not using Function
#include<iostream>
using namespace std;

int Armstrong(int num){
    int temp,rem,sum=0;
    for (temp = num;temp > 0;temp /= 10)
    {
        rem = temp % 10;
        sum += rem * rem * rem;    
    }
    return sum;
}

int main(){
    int num;
    cout<<"Enter a three-digit no = ";
    cin>>num;
          
    if(Armstrong(num) == num)
      cout<<num<<" is an Armstrong no.";
    else
      cout<<num<<" is not an Armstrong no."; 
    
    return 0;
}