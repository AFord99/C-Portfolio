#include <iostream>
using namespace std;

int main() {
   
   int sNum;
   int num1;
   int num2;
   int num3;
   
   cin >> num1;
   cin >> num2;
   cin >> num3;
   sNum = num1;
   
   if (sNum > num2){
      sNum = num2;
   }
   if (sNum > num3){
      sNum = num3;
   }
   
   cout << sNum << endl;
   
   return 0;
}
