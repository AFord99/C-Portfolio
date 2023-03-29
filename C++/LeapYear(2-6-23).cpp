#include <iostream>
using namespace std;

int main() {
   int inputYear;
   bool isLeapYear = false;
   
   cin >> inputYear;
   
   if (inputYear % 4 == 0)
   {
      if (inputYear % 400 == 0)
      {
         isLeapYear = true;
      }
      else if (inputYear / 100 % 4 == 0)
      {
         isLeapYear = true;
      }
   }
   if (isLeapYear == true)
   {
      cout << inputYear << " - " << "leap year" << endl;
   }
   else if (isLeapYear == false)
   {
      cout << inputYear << " - " << "not a leap year" << endl;
   }
   return 0;
}