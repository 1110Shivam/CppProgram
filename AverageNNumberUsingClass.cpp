#include <iostream>
using namespace std;

class Average
{
public:
   int n, i;
   float sum,temp = 0;
   void get()
   {
      cout << "Enter the no = ";
      cin >> n;
      cout << "Enter the "<< n<<" no = ";
      for (i = 1; i <= n; i++)
      {
         cin >> sum;
         temp = temp + sum;
      }
      
   }
    void aver(){
       float average;
       average = temp/n;
       cout << "Average = "<<average;
    }
};

int main()
{
   Average obj;
   obj.get();
   obj.aver();
}