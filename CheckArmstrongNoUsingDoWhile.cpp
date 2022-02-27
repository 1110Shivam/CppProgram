//C program to check the given no is armstrong or not Using do-while loop
#include<iostream>
using namespace std;

int main(){
    int num,temp,rem,sum=0;
    cout<<"Enter a three-digit no = ";
    cin>>num;
    temp = num;

    do{
        rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }while(temp!=0);
    if(sum == num)
        cout<<num<<" is an Armstrong no.";
    else
       cout<<num<<" is not an Armstrong no."; 
    
    return 0;
}
