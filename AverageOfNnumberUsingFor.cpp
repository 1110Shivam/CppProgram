#include <iostream>
using namespace std;

int main()
{
   int num, i;
   float temp, sum = 0, aver;

   cout << "How many no you want to enter = ";
   cin >> num;
   cout << "Enter "<< num <<" no."<<endl;
   for (i = 1; i <= num; ++i)
   {
      cin >> temp;

      sum += temp;
   }

   aver = sum / num;

   cout << "Sum = " << sum << endl;

   cout << "Average = " << aver;

   return 0;
}