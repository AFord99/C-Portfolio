#include <iostream>
#include <vector> 
#include <string>
#include <cctype>
using namespace std;

int GetWordFrequency(vector<string> wordsList, string currWord)
{
   unsigned int i;
   int count = 0;
   char letter;
   char letter2;
   string newWord;
   string newWord2;
   newWord = currWord;
   newWord2 = currWord;
   letter = tolower(currWord[0]);
   newWord[0] = letter;
   letter2 = toupper(currWord[0]);
   newWord2[0] = letter2;
   
   for (i = 0; i < wordsList.size(); ++i)
   {
      if (currWord == wordsList.at(i) || newWord == wordsList.at(i) || newWord2 == wordsList.at(i))
      {
         count ++;
      }
   }
   
   return count;
}

int main() {
   vector<string> wordsList;
   string currWord;
   unsigned int numWords;
   unsigned int i;
   int wordCount = 0;
   cin >> numWords;
   
   for (i = 0; i < numWords; ++i)
   {
      cin >> currWord;
      wordsList.push_back(currWord);
   }
   
   for (i = 0; i < wordsList.size(); ++i)
   {
      wordCount = GetWordFrequency(wordsList, wordsList.at(i));
      cout << wordsList.at(i) << " " << wordCount << endl;
   }

   return 0;
}
