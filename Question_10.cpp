/******************************************************************************
                                 question 10
            Given 2 stings are they anagram of each other or not
*******************************************************************************/
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
   string a,b;
   cin>>a>>b;
   //sort(string_name.begin(), string_name.end());
   sort(a.begin(),a.end());
   sort(b.begin(),b.end());
   if(a==b)
   {
       cout<<"Yes"<<endl;
   }
   else
   {
       cout<<"No"<<endl;
   }
   
}
