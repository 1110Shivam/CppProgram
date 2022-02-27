# include<iostream>
using namespace std;

float div(float,float);

int main(){
 float a,b;
 cout<<"Enter the value of A = ";
 cin>>a;
 cout<<"Enter the value of B = ";
 cin>>b;
 cout<<endl<<"Result = "<<div(a,b);
 return 0;
}

float div(float a,float b){
   if(a<b)
        return a/b;
    else
        return 1 + div(a-b,b);
}