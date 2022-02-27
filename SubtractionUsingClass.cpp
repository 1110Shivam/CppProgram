# include<iostream>
using namespace std;

class Subtract{
    int A,B;
    public:

    void get(){
        cout<<"Enter the value of A = ";
        cin>>A;
        cout<<"Enter the value of B = ";
        cin>>B;
    }
    int sub(){
        return A - B;
    }
};

int main()
{
 Subtract Sub;
 Sub.get();
 cout<<endl<<"Subtraction of A and B = "<<Sub.sub();
 
 return 0;
}