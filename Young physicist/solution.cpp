#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    int i = 0, j = 0, k = 0;
    int x, y, z;
    for (int c = 0; c < n; c++)
    {
        cin >> x >> y >> z;
        i = i + x;
        j = j + y;
        k = k + z;

    }

    if (i == 0 && j == 0 && k == 0)
    {
        cout << "YES";
    }
    else cout << "NO";
}