# include<iostream>
using namespace std;

int main(){
 int num,result=1,i=1;
 cout<<"Enter the number = ";
 cin>>num;
 
 while(i<=num){
     result = result * i;
     i++;
 }
 cout<<"Result = "<<result;
 return 0;
} 