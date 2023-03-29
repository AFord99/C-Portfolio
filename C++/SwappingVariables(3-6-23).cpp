#include <iostream>
using namespace std;

int SwapValues(int& userVal1, int& userVal2, int& userVal3, int& userVal4)
{
   int temp;
   
   temp = userVal1;
   userVal1 = userVal2;
   userVal2 = temp;
   
   temp = userVal3;
   userVal3 = userVal4;
   userVal4 = temp;
   
   return userVal1;
   return userVal2;
   return userVal3;
   return userVal4;
}

int main() {
   
   int userVal1;
   int userVal2;
   int userVal3;
   int userVal4;
   
   cin >> userVal1;
   cin >> userVal2;
   cin >> userVal3;
   cin >> userVal4;
   
   SwapValues(userVal1, userVal2, userVal3, userVal4);
   
   cout << userVal1 << " " << userVal2 << " " << userVal3 << " " << userVal4 << endl;

   return 0;
}