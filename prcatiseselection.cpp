#include <bits/stdc++.h>
using namespace std;
void sectionsort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int changeindex = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[changeindex])
            {
                changeindex = j;
            }
        }
        swap(arr[i], arr[changeindex]);
    }
}
void display(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {3, 1, 56, 32, 89};
    int n = sizeof(arr) / sizeof(arr[0]);
    sectionsort(arr, n);
    display(arr,n);
    return 0;
}