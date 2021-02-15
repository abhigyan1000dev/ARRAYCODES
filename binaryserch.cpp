#include <bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int n ,int x)
{
     int start, end, mid;
    start = 0;
    end = n-1;
   
 while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == x)
        {
           return mid;
           
        }
        else if (x > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //Start,end,mid

    int x;
    cout << "Enter the no you want to search for";
    cin >> x;

    cout<<binarysearch(arr,n,x);
   return 0;
}