# include<iostream>
using namespace std;

class Addition{
    int A,B;
    public:

    void get(){
        cout<<"Enter the value of A = ";
        cin>>A;
        cout<<"Enter the value of B = ";
        cin>>B;
    }
    int add(){
        return A + B;
    }
};

int main()
{
 Addition Add;
 Add.get();
 cout<<endl<<"Addition of A and B = "<<Add.add();
 
 return 0;
}