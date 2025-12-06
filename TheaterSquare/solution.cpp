#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n, m, a;
    cin >> n >> m >> a;

    double k = ceil(n / (double) a);
    double j = ceil(m / (double) a);

    cout << fixed << setprecision(0) << k * j;
}