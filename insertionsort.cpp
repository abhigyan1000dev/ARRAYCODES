#include <bits/stdc++.h>
using namespace std;
void insertionsort(int arr[], int n)
{

    for (int i = 1; i < n; i++) //second element
    {
        int key = arr[i]; // second element hai usko hamne key main dalaa

        int j = i - 1;    // usse ek phle i stand krega
        while ( j >= 0 && arr[j] > key )
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key; // bahar jaake key ko j jo ki -1 mein tha usko increment kra aur bdha key ki value daaldi
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
    int arr[] = {3, 1, 56, 32,1123, 89};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionsort(arr, n);
    display(arr, n);
    return 0;
}
