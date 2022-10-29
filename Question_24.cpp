
/******************************************************************************
                                 Question 24
                                Set concept
*******************************************************************************/
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
   int n; cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   set<int>se;
   for(int i=0;i<n;i++)
   {
       se.insert(arr[i]);
   }
   for(int x: se)
   {
       cout<<x<<" ";
   }
 
   
}
/***
Output
6
11 22 11 33 55 22 
11 22 33 55 
***/
