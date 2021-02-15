#include<bits/stdc++.h>
using namespace std;
int main()
{
     
    int arr[1000];
    int n;
     cin>>n;
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     int largest=INT_MIN; // - infinity
     int smallest=INT_MAX;
    //  for (int i = 0; i < n; i++)
    //  {
    //         if(arr[i]>largest)
    //         {
    //             largest=arr[i];
    //         }
            
    //         if(arr[i]<smallest)
    //         {
    //             smallest=arr[i];
    //         }

    //  }
    for (int i = 0; i < n; i++)
    {
        largest=max(largest,arr[i]);
        smallest=min(smallest,arr[i]);
    }
    
     cout<<"Smallest and Largest are "<<smallest<<"and"<<largest;
     
    return 0;
}