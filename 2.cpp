#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum = 0;
    int num;

    cin >> num;
    while (num > 0)
    {
        int digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }

    cout << sum << endl;
}