/******************************************************************************
                                 question 19
                      Find first reapting character
*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s; cin>>s;
  for(int i=0;i<s.size();i++)
  {
      int count =0;
      for(int j=0; j<s.size();j++)
      {
          if(s[i]== s[j])
          {
              count++;
          }
          
      }
      if(count>1)
      {
          cout<<s[i]<<endl;
          return 0;
      }
  }
  cout<<"Not found"<<endl;
}
/****
 abcdeaas
 a
 asdfgh
 Not found
***/
