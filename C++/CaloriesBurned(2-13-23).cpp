#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   double age;
   double weight;
   double heartRate;
   double min;
   
   cin >> age;
   cin >> weight;
   cin >> heartRate;
   cin >> min;
   
   double calories = ((age * 0.2757) + (weight * 0.03295) + (heartRate * 1.0781) - 75.4991) * min / 8.368;
   cout << fixed << setprecision(2);
   cout << "Calories: " << calories << " calories" << endl;
   

   return 0;
}
