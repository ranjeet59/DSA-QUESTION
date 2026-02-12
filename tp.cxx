#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int ans = 0, rem;

    while (num > 0)
    {
        rem = num % 10;
        num /= 10;

        ans = ans * 10 + rem;
    }
    cout << ans;

    return 0;
}
