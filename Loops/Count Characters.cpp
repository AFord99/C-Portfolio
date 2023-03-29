#include <iostream>
#include <string>
using namespace std;

int main() {

   char letter;
   string word;
   int count = 0;
   
   cin >> letter;
   getline (cin, word);
   
   for (int i = 0; i < word.length(); i++)
   {
      if (letter == word[i])
      {
         count++;
      }
   }
   if (count == 1)
   {
      cout << count << " " << letter << endl;
   }
   else 
   {
      cout << count << " " << letter << "'s" << endl;
   }
   return 0;
}
