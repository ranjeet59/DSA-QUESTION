#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    cin >> num;

    int reverse = 0;
    int original = num;

    if (num < 0)
    {
        cout << "Not Palindrome";
        return 0;
    }

    while (num > 0)
    {

        int digit = num % 10;

        reverse = reverse * 10 + digit;

        num = num / 10;
    }

    if (original == reverse)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }
}