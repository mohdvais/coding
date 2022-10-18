/******************************************************************************
                                 question 18
Given two string check if they are rotation of each oother or not?
*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string one,two;
    cin>>one>>two;
    string check =one +one;
    auto index = check.find(two);
    if(index != string :: npos)
    {
        cout << "Yes, they are rotation of each other"<<endl;
    }
    else{
        cout<< "No, they are not"<<endl;
    }
}
/****
 output
 abcabc
abc
Yes, they are rotation of each othe
***/
