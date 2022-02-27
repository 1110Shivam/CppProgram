//C program to check the given no is armstrong or not Using while loop
#include<iostream>
using namespace std;

int main(){
    int num,temp,rem,sum=0;
    cout<<"Enter a three-digit no = ";
    cin>>num;
    temp = num;

    while(temp!=0){
        rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }
    if(sum == num)
        cout<<num<<" is an Armstrong no.";
    else
       cout<<num<<" is not an Armstrong no."; 
    
    return 0;
}
