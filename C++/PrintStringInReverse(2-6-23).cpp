#include <iostream>
using namespace std;

int main() {
   int i;
   string word;
   
   getline (cin, word);
   while (word != "Done" && word != "done" && word != "d")
   {
      for (i = word.length()-1; i >= 0; i--)
      {
         cout << word[i];
      }
      getline (cin, word);
      cout << endl;
   }
   

   return 0;
}
