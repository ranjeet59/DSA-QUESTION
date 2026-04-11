#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6] = {1, 2, 2, 2, 3, 4};

    int n = 6;
    int target = 2;

    int start = 0, end = n - 1, mid;

    while (start <= end)
    {
        mid = (start + end) / 2;

        if (arr[mid] == target)
        {
            cout << 1;
        }

        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << -1 << " ";

    return 0;
}