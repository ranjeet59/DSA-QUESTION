#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {4, 0, 6, 0, 8, 0, 2};
    int n = 7;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] == 0 && arr[j + 1] != 0)
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "Move Zero Last" << " ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}