#include <bits/stdc++.h>
using namespace std;
bool comparator(int a, int b)
{
    return a < b;
}
void bubblesort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
                if(comparator(arr[j],arr[j+1]))
                {
                swap(arr[j], arr[j + 1]);
                }
        }
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
    bubblesort(arr, n);
    display(arr, n);
    return 0;
}