# include<iostream>
using namespace std;

int Multi(int,int,int);
int main()
{
 int a,b,c;
 cout<<"Enter the value of A = ";
 cin>>a;
 cout<<"Enter the value of B = ";
 cin>>b;
 cout<<"Enter the value of C = ";
 cin>>c;
 cout<<endl<<"Result = "<<Multi(a,b,c);
 return 0;
}
int Multi(int a,int b,int c)
{
    int temp;
    temp=a*b*c;
    return temp;
}