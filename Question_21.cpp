
/*********************************************************************************************************
                                           question 21
Find sum of two element in an array which is equal to target using binary search with sort array.
**********************************************************************************************************/
#include <iostream>
using namespace std;


int main() {
    int n; cin>> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cin>> target;
    
    for(int i=0;i<n;i++)
    {
        int a= arr[i];
        int find = target-a;
        int left = i=1, right = n-1;
        while(left <= right)
        {
            int mid = (left +right)/2;
            if(arr[mid] == find)
            {
                cout<<"Yes"<<endl;
                cout<<i<<" "<<mid<<endl;
                return 0;
            }
            else if(arr[mid]> find)
            {
                right = mid - 1;
            }
            else 
            {
                left = mid + 1;
            }
        }
    }
    cout<<" Not Found";
}
/***
Output
6
10 12 15 16 17 25
25
Yes
1 2
***/
