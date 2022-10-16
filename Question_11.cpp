/******************************************************************************
                                 question 11
                         Sum of integers in a string
*******************************************************************************/
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    string s = "1578";
    int sum = 0;
    for(int i=0;i<s.size();i++)
    {
        sum += s[i]-'0';
    }
    cout <<sum<<endl;
    
}
