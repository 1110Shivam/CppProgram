    # include<iostream>
    using namespace std;

    int Sub(int,int);
    int main()
    {
    int a,b;
    cout<<"Enter the value of A = ";
    cin>>a;
    cout<<"Enter the value of B = ";
    cin>>b;
    cout<<endl<<"Subtraction of A and B = "<<Sub(a,b);
    return 0;
    }
    int Sub(int a,int b)
    {
        if(b==0)
            return a;
        else
            return Sub((a-1),(b-1));
    }