# include<iostream>
using namespace std;

int Multiply(int,int);
int main()
{
 int a,b;
 cout<<"Enter the value of A = ";
 cin>>a;
 cout<<"Enter the value of B = ";
 cin>>b;
 cout<<endl<<"Result = "<<Multiply(a,b);
 return 0;
}
int Multiply(int a,int b)
{
    int temp;
    temp=a*b;
    return temp;
}