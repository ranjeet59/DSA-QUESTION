#include <bits/stdc++.h>

using namespace std;

int main()
{
    int year;
    cin >> year;
    if (year % 4 == 0)
    {
        cout << "is leep year" << endl;
    }
    else if (year % 4 == 0 && year % 100 != 0)
    {
        cout << "is leep year" << endl;
    }
    else
    {
        cout << "not leap year" << endl;
    }
}