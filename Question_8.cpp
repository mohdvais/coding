
/******************************************************************************
                                 question 8
                          Count words in a string.
*******************************************************************************/
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int count_words(string s)
{
    int count = 0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]== ' ')
        {
            count++;
        }
    }
    return count+1;
}

int main() {
   string s= "";
   getline(cin,s);
   cout<<count_words(s);
}
