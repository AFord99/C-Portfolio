#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   
   double count = 0.0;
   int input = 0;
   double avg = 0.0;
   int max = -1;
   double total = 0.0;
   
   cout << fixed << setprecision(2);
   cin >> input;
   while (input >= 0)
   {
      count++;
      if (input > max)
      {
         max = input;
      }
      total = total + input;
      cin >> input;
   }
   cout << max << " " << total / count << endl;
   return 0;
}
