/******************************************************************************
                                 Question 22
                          Sum of array using recursion 
*******************************************************************************/
#include <iostream>
using namespace std;

int sumOfarray(int i, int arr[], int n)
{
   if(i == n-1) 
   {
       return arr[i];
   }
   return arr[i]+sumOfarray(i+1, arr, n);
}


int main() {
    int n; cin>> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<sumOfarray(0,arr,n);
}
/***
Output
7
2 5 7 6 9 1 9
39
***/
