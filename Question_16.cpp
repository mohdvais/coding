/******************************************************************************
                                 question 16
          Calculalte the sum of subarray in a given array
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
    int target; cin>>target;
    for(int i=0;i<n;i++)
    {
        int sum =0;
        for(int j=i;j<n;j++)
        {
            sum+= arr[j];
            if(sum == target)
            {
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    cout<<"Not found";
}

/***
 5
1 2 3 4 5 
5
Yes
***/
