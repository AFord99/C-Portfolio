#include <iostream>
#include <vector>   // Must include vector library to use vectors
using namespace std;

int main() {
   vector<int> userInts; // A vector to hold the user's input integers

   int numInts;
   cin >> numInts;
   int temp;
   int i;
   for (i = 0; i < numInts; ++i)
   {
      cin >> temp;
      userInts.push_back(temp);
   }
   
   for (i = numInts - 1; i >= 0; --i)
   {
      cout << userInts.at(i) << ",";
   }

   cout << endl;
   
   return 0;
}
