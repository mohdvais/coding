
/******************************************************************************
                                 question 7
                check that given string is palindrome or not
*******************************************************************************/
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
   string s= "";
   cin>>s;
   string original = s;
   reverse(s.begin(), s.end());
   if(original == s)
   {
       cout<<"Palindrome";
   }
   else
   {
       cout<<"Not palindrome";
   }
 
}
