# include<iostream>
using namespace std;

int main(){
    int n,m,result=1;
    cout<<"Enter the number = ";
    cin>>n;
    do{
        m=n%10;
        result = result * m;
        n=n/10;
    }while(n>0);
    cout<<"Result = "<<result<<endl;
    return 0;
}