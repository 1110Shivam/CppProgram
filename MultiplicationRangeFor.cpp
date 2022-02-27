# include<iostream>
using namespace std;

int main()
{
 int ul,li,result=1,i;
 cout<<"Enter the lower limit = ";
 cin>>li;
 cout<<"Enter the upper limit = ";
 cin>>ul;
 
 for(i=li;i<=ul;i++){
     result = result * i;
 }
 cout<<"Result = "<<result;
 return 0;
}