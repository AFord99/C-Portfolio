#include <iostream>
#include <vector>   // Must include vector library to use vectors
using namespace std;

int main() {

   int i = 0;
   int userInput = 0;
   cin >> userInput;
   
   vector<int> myNums;
   
   while (userInput >= 0 && i < 9)
   {
      myNums.push_back(userInput);
      ++i;
      cin >> userInput;
   }
    if (userInput >= 0)
    {
       cout << "Too many numbers" << endl;
    }
    else
    {
       cout << "Middle item: " << myNums.at(myNums.size() / 2) << endl;
    }
   

   return 0;
}
