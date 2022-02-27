# include<iostream>
using namespace std;

int main(){
 int num,result=1,i=1;
 cout<<"Enter the number = ";
 cin>>num;
 
 do{
     result = result * i;
     i++;
 }while(i<=num);
 cout<<"Result = "<<result;
 return 0;
} 