#include <iostream>
#include <string>
using namespace std;

int main() {
   string firstName;
   string middleName;
   string lastName = "null";
   
   cin >> firstName;
   cin >> middleName;
   cin >> lastName;
   
   if (lastName != "null"){
   cout << lastName << ", " << firstName.at(0) << "." << middleName.at(0) << "." << endl;
}
   else{
       cout << middleName << ", " << firstName.at(0) << "." << endl; 
   }
   return 0;
}
