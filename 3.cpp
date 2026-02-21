#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    cin >> num;

    int rev = 0;
    while (num > 0)
    {
        int digit = num % 10;

        num /= 10;
        rev = rev * 10 + digit;
    }
    cout << rev << endl;
}