# include<iostream>
using namespace std;

float aver(float num1,float num2,float num3){
    return (num1+num2+num3)/3;
}

int main(){
    float num1,num2,num3;
    cout<<"Enter the first no = ";
    cin>>num1;
    cout<<"Enter the second no = ";
    cin>>num2;
    cout<<"Enter the third no = ";
    cin>>num3;
    cout<<"Average = "<<aver(num1,num2,num3);
    
    return 0;
}