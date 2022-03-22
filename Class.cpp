#include<iostream>
using namespace std;
class student{
 char name[15];
 int roll,mob;
 public:
 void set();
 void get();
};
void student::set(){
 cout<<endl<<"Enter your name = ";
 cin>>name;
 cout<<endl<<"Enter your roll no = ";
 cin>>roll;
 cout<<endl<<"Enter your mobile no = ";
 cin>>mob;
}
void student::get(){
 cout<<endl<<"Name = "<<name;
 cout<<endl<<"Roll No = "<<roll;
 cout<<endl<<"Mobile No = "<<mob;
}

int main(){
 student obj;
 obj.set();
 obj.get();
 return 0;
}