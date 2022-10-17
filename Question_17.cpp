/******************************************************************************
                                 question 17
          Find the maximum profit from stock market in a given array 
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
    int max_profit =0;
    for(int i=0;i<n;i++)
    {
        int buying_price = arr[i];
        for(int j=i+1;j<n;j++)
        {
            int selling_price = arr[j];
            if(selling_price - buying_price > max_profit)
            {
                max_profit = selling_price -buying_price;
            }
        }
    }
    cout<<max_profit<<endl;
}

/***
5
5 7 10 12 30
25
***/
