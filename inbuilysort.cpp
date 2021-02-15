#include<bits/stdc++.h>
using namespace std;
void display(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
     int arr[] = {3, 1, 56, 32,1123,89};
    int n = sizeof(arr) / sizeof(arr[0]);
    display(arr,n);
    sort(arr,arr+n,greater<int>());
    cout<<"\nAfter Sorting\n";
    display(arr,n);

}