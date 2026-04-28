#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {-1, -4, -5, 7, 8, 9};

    int n = 6;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] && arr[j + 1] > 0)
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "Postive number ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}