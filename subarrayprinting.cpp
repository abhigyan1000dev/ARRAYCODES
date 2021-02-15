#include <bits/stdc++.h>
using namespace std;

void printingsub(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << endl;
        for (int j = i; j < n; j++)
        {  cout<<endl;
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] <<" ";
            }
        }
    }
}


int main()
{
    int arr[] = {-4,1,3,-2,6,2,-1,4,-7}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    printingsub(arr, n);
   

    return 0;
}