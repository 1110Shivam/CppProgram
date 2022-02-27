# include<iostream>
using namespace std;

int main(){
    int n,m,result=1;
    cout<<"Enter the number = ";
    cin>>n;
    while(n>0){
        m=n%10;
        result = result * m;
        n=n/10;
    }
    cout<<"Result = "<<result<<endl;
    return 0;
}