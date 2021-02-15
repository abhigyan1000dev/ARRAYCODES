#include <bits/stdc++.h>
using namespace std;
void kadanealgo(int arr[], int n)
{

    int currentsum = arr[0];
    int overallsum = arr[0];
    int left=-1;
    int right=-1;

    for (int i = 0; i < n; i++)
    {
        if (currentsum > 0)
        {
            currentsum += arr[i];
        }
        else
        {
            currentsum = arr[i];
        }

        if (currentsum > overallsum)
        {
            overallsum = currentsum;
           
            

        }
    }


    cout<<"Largest Subarray Sum is = "<<overallsum;
    
   
    
}

int main()
{
    // int arr[]={4,3,-2,6,-14,7,-1,4,5,7,-10,2,9,-10,5,-9,6,1};
    int arr[] = {-4,1,3,-2,6,2,-1,4,-7}; 
    int n=sizeof(arr)/sizeof(arr[0]);
    kadanealgo(arr,n);
    return 0;
}