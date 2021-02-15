#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    //Now Writing Linear search algorithm
    int x,i;
    cout<<"ENTER THE ELEMENT YOU WANT TO SEARCH FOR = "; cin>>x;
    for ( i = 0; i < n; i++)
    {
        if(arr[i]==x)
        {
            cout<<"THE ELEMENT FOUND IS  "<<arr[i];
            break;
        }
    }
    if(i==n)
    {
        cout<<"-1"<<"i.e Element not found";
    }
    
    return 0;
}