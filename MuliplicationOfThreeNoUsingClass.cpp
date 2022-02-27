# include<iostream>
using namespace std;

class Multiplication{
    int A,B,C;
    public:

    void get(){
        cout<<"Enter the value of A = ";
        cin>>A;
        cout<<"Enter the value of B = ";
        cin>>B;
        cout<<"Enter the value of C = ";
        cin>>C;
    }
    int product(){
        return A * B * C;
    }
};

int main()
{
 Multiplication Product;
 Product.get();
 cout<<endl<<"Result = "<<Product.product();
 
 return 0;
}