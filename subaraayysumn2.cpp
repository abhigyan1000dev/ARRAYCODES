#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10000];
    int n;
    cin >> n;
    int cumsum[10000] = {0};
    cumsum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
        cumsum[i] = cumsum[i - 1] + arr[i]; // Cumulative Sum ki array tayyar krli..
    }
    int left = -1;
    int right = -1;
    int currentsum = 0;
    int maxsum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            currentsum = cumsum[j] - cumsum[i - 1];
            if (currentsum > maxsum)
            {
                maxsum = currentsum;
                left = i;
                right = j;
            }
        }
    }
    cout << "Maximum sum of the sub array is" << maxsum;
    cout << endl;
    // Printing the sub array which is maximum
    for (int i = left; i < right; i++)
    {
        cout << arr[i]<<" , ";
    }

    return 0;
}