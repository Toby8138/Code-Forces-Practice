#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0, m = 0, a = 0, b = 0;
    cin >> n >> m >> a >> b;
    if (a <= (double) b / m)
    {
        cout << a * n;
    }
    else {
        if (n > m)
        {
            if (n % m == 0)
            {
                cout << n/m*b;
            }
            else {
                cout << min(n/m*b + (n%m)*a, n/m*b + b);
            }
        }
        else {
            cout << min(b, a * n);
        }
    }
}