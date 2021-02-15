#include <bits/stdc++.h>
using namespace std;

void insertionnsort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;   // Jis patte pe h usse ek phla card  Positive hi rhega aur -ve to  overlap

        while (j >= 0 && arr[j] > key)   // Jis 
        {
                arr[j + 1] = arr[j];
                j = j - 1;
        }    
            arr[j + 1] = key;
        
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int arr[] = {9, 2, 4, 889, 23};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionnsort(arr, n);
    display(arr, n);
    return 0;
}