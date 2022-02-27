# include<iostream>
using namespace std;

class Calculator{
    float A,B;
    public:

    void get(){
        cout<<"\nEnter the value of A = ";
        cin>>A;
        cout<<"Enter the value of B = ";
        cin>>B;
    }
    float Add(){
        return A + B;
    }
    float Sub(){
        return A - B;
    }
    float Multi(){
        return A * B;
    }
    float Div(){
        return A/B;
    }
};

int main()
{
 int ch;
 Calculator cal;
 do{  
 cout<<"Press 1 for addition"<<endl;
 cout<<"Press 2 for subtraction"<<endl;
 cout<<"Press 3 for multiplication"<<endl;
 cout<<"Press 4 for division"<<endl;
 cout<<"Press 5 for exit"<<endl; 
 cout<<"Enter your choice = "; 
 cin>>ch;  
  
  switch (ch){  
      case 1:  
      cal.get();
      cout<<"Addition "
      "of the numbers ="<<cal.Add()<<endl;
      break;  
      case 2:  
      cal.get();
      cout<<"Subtraction "
      "of the number = "<<cal.Sub()<<endl;
      break;  
      case 3:  
      cal.get();
      cout<<"Multiplication "
      "of two numbers = "<<cal.Multi()<<endl;
      break;  
      case 4:  
      cal.get();
      cout<<"Division "
      "of two numbers = "<<cal.Div()<<endl;
      break;  
      case 5:  
      exit(0);
      break;  
      default:  
      cout<<"You entered the invalid choice!!";  
      break;  
  }  
    cout<<endl<<"_______________"
    "_____________"<<endl<<endl;  
 }while(ch != 5);  
 
 return 0;
}