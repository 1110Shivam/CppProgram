# include<iostream>
using namespace std;

class Modulas{
    int a,b;
    public:

    void get(){
        cout<<"Enter the value of A = ";
        cin>>a;
        cout<<"Enter the value of B = ";
        cin>>b;
    }
    int mod(){
        return a % b;
    }
};

int main(){
 Modulas Mod;
 Mod.get();
 cout<<endl<<"Result = "<<Mod.mod();
 
 return 0;
}