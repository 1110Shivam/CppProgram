 # include<iostream>
 using namespace std;

 int main(){
     float kel,cel;
     cout<<"Enter Temperature In Kelvin = ";
     cin>>kel;
     cel = kel - 273.15;
     cout<<"Temperature In Celsius = "<<cel;
     return 0;
 }