/******************************************************************************
                                 question 13
                     Sum of two element is equal to target
*******************************************************************************/
/******************************************************************************
                                 question 13
                     Sum of two element is equal to target
*******************************************************************************/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    int n,i;
    cin>>n;
    int arr[i];
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cin>>target;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==target){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    cout <<"No"<<endl;
}

/***output
6
12 9 18 5 10 11
14
Yes
***/
