/******************************************************************************

                            Find the Maximum element from the array

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //output -> min element from the array
    int mx = arr[0];
    for(int i=0; i<n;i++)
    {
        if(arr[i]>mx)
        {
            mx = arr[i];
        }
    }
    cout<<mx<<endl;
}
