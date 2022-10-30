/******************************************************************************
                                 Question 27
                            How to work in map simple use.
*******************************************************************************/

#include <bits/stdc++.h>
#include <map>
using namespace std;

int main()
{
    string s;
    cin>>s;
    map<char, int>mp;
    for(int i=0;i<s.size();i++)
    {
        mp[s[i]]++;
    }
    for(auto x: mp)
    {
      cout<<x.first<<" "<<x.second<<endl;
    }
}