#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int num1;
   int num2;
   int num3;
   int num4;
   double num5;
   double num6;
   double num7;
   double num8;

   cin >> num1;
   cin >> num2;
   cin >> num3;
   cin >> num4;
   
   cout << num1 * num2 * num3 * num4 << " ";
   cout << (num1 + num2 + num3 + num4) / 4 << endl;
   
   num5 = (double) num1;
   num6 = (double) num2;
   num7 = (double) num3;
   num8 = (double) num4;
   
   cout << fixed << setprecision(3);
   cout << num5 * num6 * num7 * num8 << " ";
   cout << (num5 + num6 + num7 + num8) / 4 << endl;
   
   return 0;
}
