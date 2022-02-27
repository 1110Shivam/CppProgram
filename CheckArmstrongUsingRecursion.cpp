// program to check given no is armstrong or not using recursion
#include <iostream>
#include <cmath>

using namespace std;

int Armstrong(int num){
    if (num > 0){
        return (pow(num % 10, 3) + Armstrong(num / 10));
    }
    return 0;
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