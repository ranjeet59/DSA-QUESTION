#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    bool isNegative = false;
    if (num < 0)
    {
        isNegative = true;
        num = -num;
    }

    int ans = 0, rem;

    while (num > 0)
    {
        rem = num % 10;
        num /= 10;

        ans = ans * 10 + rem;
    }
    if (isNegative)
        ans = -ans;
    cout << ans;

    return 0;
}
