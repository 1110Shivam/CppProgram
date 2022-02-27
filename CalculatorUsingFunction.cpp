#include<iostream>  
using namespace std;

int Add();  
int Sub();  
int Multi();  
int Div();  
int Mod();  

int main(){  
 int ch;  
 do{  
 cout<<"Press 1 for addition"<<endl;
 cout<<"Press 2 for subtraction"<<endl;
 cout<<"Press 3 for multiplication"<<endl;
 cout<<"Press 4 for division"<<endl;
 cout<<"Press 5 for modulas"<<endl;
 cout<<"Press 6 for exit"<<endl; 
 cout<<"Enter your choice = "; 
 cin>>ch;  
  
  switch (ch){  
      case 1:  
      Add();
      break;  
      case 2:  
      Sub();
      break;  
      case 3:  
      Multi();
      break;  
      case 4:  
      Div();
      break;  
      case 5:  
      Mod();
      break;  
      case 6:  
      exit(0);
      break;  
      default:  
      cout<<"You entered the invalid choice!!";  
      break;  
  }  
    cout<<endl<<"_______________"
    "_____________"<<endl<<endl;  
 }while(ch != 6);  
    return 0;
}  
  
int Add(){  
 int n,sum=0,i,num;  
 cout<<"How many numbers you want to add = ";  
 cin>>n;  
 cout<<"Please enter the number one by one = ";  
 
 for(i=1;i<=n;i++){  
    cin>>num;  
    sum = sum + num;  
 }  
 cout<<endl<<"Sum of the numbers = "<<sum;  
 return 0;
}  

int Sub(){  
 int num1, num2, sub;  
 cout<<endl<<"Enter the First number = ";  
 cin>>num1;  
 cout<<"Enter the Second number = ";  
 cin>>num2;  
 sub = num1 - num2;  
 cout<<"Subtraction of the number = "<<sub;  
 return 0;
}

int Multi(){  
 int num1, num2, mul;  
 cout<<endl<<"Enter the First number = ";  
 cin>>num1;  
 cout<<"Enter the Second number = ";  
 cin>>num2;  
 mul = num1 * num2;  
 cout<<"Multiplication of two numbers = "<<mul;  
 return 0;
}

int Div(){  
 float num1, num2, div = 0;  
 cout<<endl<<"Enter the First number = ";  
 cin>>num1;  
 cout<<"Enter the Second number = ";  
 cin>>num2;  
 div = num1 / num2;  
 cout<<"Division of two numbers = "<<div;  
 return 0;
}  
int Mod(){
  int num1,num2,mod;
  cout<<endl<<"Enter the first numbers = ";
  cin>>num1;
  cout<<"Enter the second numbers = ";
  cin>>num2;
  mod = num1 % num2;
  cout<<"Modulas of two no = "<<mod;
  return 0;
}