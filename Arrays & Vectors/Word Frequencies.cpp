#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

   vector<string> words;
   vector<int> count;
   string currWord;
   unsigned int i;
   unsigned int j;
   unsigned int numWords;
   
   cin >> numWords;
   
   for (i = 0; i < numWords; ++i)
   {
      cin >> currWord;
      words.push_back(currWord);
      count.push_back(0);
   }
   
   for (i = 0; i < words.size(); ++i)
   {
      for (j = 0; j < words.size(); ++j)
      {
         if (words.at(i) == words.at(j))
         {
            count.at(i) = count.at(i) + 1;
         }
      }
   }
   
   for (i = 0; i < words.size(); ++i)
   {
      cout << words.at(i) << " - " << count.at(i) << endl;
   }
   return 0;
}
