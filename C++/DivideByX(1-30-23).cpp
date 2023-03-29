#include <iostream>
using namespace std;

int main() {
   int x;
   int userNum;

   cin >> userNum;
   cin >> x;
   
   cout << userNum / x << " ";
   userNum = userNum / x;
   cout << userNum / x << " ";
   userNum = userNum / x;
   cout << userNum / x << endl;

   return 0;
}
