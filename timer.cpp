#include <bits/stdc++.h>

using namespace std;

int main()
{

    int arr[] = {7, 3, 9, 1, 5};
    int n = 5;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "sorted array -->> ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}