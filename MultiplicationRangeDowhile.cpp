# include<iostream>
using namespace std;

int main()
{
 int ul,li,result=1;
 cout<<"Enter the lower limit = ";
 cin>>li;
 int i=li;
 cout<<"Enter the upper limit = ";
 cin>>ul;
 
 do{
    result = result * i;
    i++;
 }while(i<=ul);
 cout<<"Result = "<<result;
 return 0;
}