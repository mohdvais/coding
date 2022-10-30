/******************************************************************************
                                 Question 25
                            How to work in map simple use.
*******************************************************************************/

#include <iostream>
#include <map>
using namespace std;

int main()
{

    /*
    map < key_data_type, value_data_type> map_name;
    */
    //map<key,value>mp;
    map<int, string>mp;
    mp[18209] = "Anshul";
    mp[20884] = "abcd";
    mp[902] = "xyz";

    cout<<mp.size()<<endl;
    cout<<mp[123]<<endl;
    cout<<mp.size()<<endl;
}
