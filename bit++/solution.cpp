#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s[1] == '+') count++;
        else count--;
    }

    cout << count;
}