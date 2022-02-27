# include<iostream>
using namespace std;

class Multiplication{
    int A,B;
    public:

    void get(){
        cout<<"Enter the value of A = ";
        cin>>A;
        cout<<"Enter the value of B = ";
        cin>>B;
    }
    int product(){
        return A * B;
    }
};

int main()
{
 Multiplication Product;
 Product.get();
 cout<<endl<<"Result = "<<Product.product();
 
 return 0;
}