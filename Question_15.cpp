/******************************************************************************
                                 question 15
                       Find majority element if any
*******************************************************************************/
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() { 
    int n,i;
    cin>>n;
    int arr[i];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        //is it mejority element or not
        int cnt =0;
        for(int j=0;j<n;j++){
            if(arr[i] == arr[j])
            {
                cnt++;
            }
        }
        if(cnt > (n/2))
        {
            cout<<arr[i];
            return 0;
        }
    }
    cout<<"No mejority element";
    
}


/***output
7
5 3 5 9 5 20 5
5
***/
