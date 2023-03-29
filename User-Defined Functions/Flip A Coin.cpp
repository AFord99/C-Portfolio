#include <iostream>
#include <cstdlib>
using namespace std;

string CoinFlip()
{
   int random = rand();
   random = random % 2;
   if (random == 0)
   {
      return "Tails";
   }
   else
   {
      return "Heads";
   }
}

int main() {
   int userInput;
   int i;
   srand(2);  // Unique seed

   cin >> userInput;
   for (i = 0; i < userInput; ++i)
   {
      cout << CoinFlip() << endl;
   }

   return 0;
}
