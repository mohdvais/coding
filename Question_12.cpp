/******************************************************************************
                                 question 12
                     Make the first latter of the string capital
*******************************************************************************/
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    //lower upper case
    string a = "Mohammad";
    if(a[0]>= 'a' && a[0]<= 'z')
    {
        a[0]-=32;
    }
    cout<<a<<endl;
    
}

/***
 Small letter
 int main() {
    //lower upper case
    string a = "Mohammad";
    if(a[0]>= 'a' && a[0]<= 'z')
    {
        a[0]+=32;
    }
    cout<<a<<endl;
    
}
 **/
