/******************************************************************************
                                 Question 25
                            How to work in map simple use.
*******************************************************************************/

#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int,int> mp;
    mp[10] = 1;
    mp[20] = 2;
    mp[30] = 3;

    for(auto x: mp)
    {
        cout<<x.first<<" "<< x.second<<endl;
    }
}