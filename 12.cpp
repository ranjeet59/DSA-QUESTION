#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {4, 9, 1, 7, 3, 9};
    int n = 6;

        for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    int largest = arr[n - 2];
    int secondLargest = -2;

    for (int i = n - 3; i >= 0; i--)
    {
        if (arr[i] != largest)
        {
            secondLargest = arr[i];
            break;
        }
    }

    // Step 3: Output
    if (secondLargest == -2)
        cout << "Second largest not found";
    else
        cout << "Second largest = " << secondLargest;

    return 0;
}