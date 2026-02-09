#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ADD DIGIT OF NUMBER
    int num;
    cin >> num;

    int ans = 0, rem;

    while (num != 0)
    {
        rem = num % 10;
        num /= 10;
        ans = ans + rem;
    }
    cout << ans << endl;
    return 0;
}
