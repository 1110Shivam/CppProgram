#include<iostream>  
using namespace std;

int main(){  
 float num1,num2,result;
 int ch,mod,a,b;
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
      cout<<endl<<"Enter the First number = ";  
      cin>>num1;  
      cout<<"Enter the Second number = ";  
      cin>>num2;  
      result = num1 + num2;  
      cout<<"Sum of the numbers = "<<result;
      break;  
      
      case 2:  
      cout<<endl<<"Enter the First number = ";  
      cin>>num1;  
      cout<<"Enter the Second number = ";  
      cin>>num2;  
      result = num1 - num2;  
      cout<<"Subtraction of the numbers = "<<result;
      break;  
      
      case 3:  
      cout<<endl<<"Enter the First number = ";  
      cin>>num1;  
      cout<<"Enter the Second number = ";  
      cin>>num2;  
      result = num1 * num2;  
      cout<<"Multiplication of the numbers = "<<result;
      break;  
      
      case 4:  
      cout<<endl<<"Enter the First number = ";  
      cin>>num1;  
      cout<<"Enter the Second number = ";  
      cin>>num2;  
      result = num1 / num2;  
      cout<<"Division of the numbers = "<<result;
      break;  
      
      case 5:  
      cout<<endl<<"Enter the First number = ";  
      cin>>a;  
      cout<<"Enter the Second number = ";  
      cin>>b;  
      mod = a % b;  
      cout<<"Modulas of the numbers = "<<mod;
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
