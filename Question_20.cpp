/******************************************************************************
                                 question 20
                         Binary search in an array
*******************************************************************************/
#include <iostream>
using namespace std;


int main() {
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target; cin>> target;
    int left =0, right =n-1;
    
    while(left <= right){
        int mid = (left + right)/2;
        if(arr[mid] == target)
        {
            cout<< mid<<endl;
            return 0;
        }
        else if(arr[mid]> target){
            right = mid - 1;
        }
        else {
            left = mid +1;
        }
        
    }
    cout<< " Not found";
}
/***
 7
10 20 30 40 50 60 70 
60
5
***/
