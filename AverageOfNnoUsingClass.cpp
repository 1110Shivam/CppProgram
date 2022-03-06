#include <iostream>
using namespace std;

class Average{
    public:
    int num;
    float temp,sum=0,aver;
    
    void get(){
        cout<<"How many no you want to enter = ";
        cin>>num;
        cout<<"Enter "<<num<<" no = ";
        for(int i=1;i<=num;i++){
            cin>>temp;
            sum += temp;
        }
    }
    void Sum(){
        cout<<"Sum = "<<sum<<endl;
    }
    void Aver(){
        aver = sum/num;
        cout<<"Average = "<<aver;
    }

};
int main(){
    Average obj;
    obj.get();
    obj.Sum();
    obj.Aver();
    return 0;
}