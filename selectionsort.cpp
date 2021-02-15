#include <bits/stdc++.h>
using namespace std;
void selectionsort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int minindex = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }

        swap(arr[i], arr[minindex]);
    }
}

int main()
{

    int arr[] = {5, 4, 3, 1, 2, 9, 23, 88, 32, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionsort(arr, n);

    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
    cout << endl;
    return 0;
} 