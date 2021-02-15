#include <bits/stdc++.h>
using namespace std;

void printingsub(int arr[], int n)
{
    int csum = 0;
    int maxsum = 0;
    int left, right;

    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {
            cout << endl;
            for (int k = i; k <= j; k++)
            {
                csum += arr[k];

                // cout << arr[k]<<" ";
            }
            if (csum > maxsum)
            {
                maxsum = csum;
                left = i;
                right = j;
            }

            csum = 0;
        }
        //cout<<sum<<endl;
    }
        for (int  p = left; p < right; p++)
        {
            cout<<arr[p]<<", ";
        }
        
    cout << "MAXIMUM SUBARRAY SUM = " << maxsum;
}

int main()
{
    int arr[] = {-4, 1, 3, -2, 6, 2, -8, -9, 4}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    printingsub(arr, n);

    return 0;
}