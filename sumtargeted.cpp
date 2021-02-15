#include <bits/stdc++.h>
using namespace std;

int main()
{


    int arr[]={1,2,3,4,6,7,8,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i ,j;
    i=0;
    j=n-1;
    int sum=8;
    while(i!=j)
    {
        if(arr[i]+arr[j]==sum)
        {
            cout<<"Pair is "<<arr[i]<<" & "<<arr[j]<<endl;
            i++;
            j--;
        }
        else if(arr[i]+arr[j]<sum)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return 0;
}