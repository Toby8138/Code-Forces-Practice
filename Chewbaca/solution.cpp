#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long accu = 0;

    long long g = 1;
    while (n > 0)
    {
        int i = n % 10L;
        if (i > 4 && n != 9)
        {
            accu += (9 - i) * g;
        }
        else accu += i * g;
        g *= 10L;
        n /= 10L;
    }

    cout << accu;
}