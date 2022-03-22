// C++ program to Print Natural Numbers in Reverse Using Recursion
#include<iostream>
using namespace std;

void naturalNo(int n)
{
 if(n<=0)
 return;
 cout<<n<<endl;
 naturalNo(n-1);
}

int main()
{
 int n;
 cout<<"Enter the number = ";
 cin>>n;
 naturalNo(n);
 return 0;
}