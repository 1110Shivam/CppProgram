# include<iostream>
using namespace std;

int Mod(int,int);
int main()
{
 int a,b;
 cout<<"Enter the value of A = ";
 cin>>a;
 cout<<"Enter the value of B = ";
 cin>>b;
 cout<<endl<<"Result = "<<Mod(a,b);
 return 0;
}
int Mod(int a,int b)
{
    if(a < b)
        return a;
    else
        return Mod(a-b, b);
}