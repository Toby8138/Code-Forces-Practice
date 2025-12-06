#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;
    
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);
    
    long maxdiameter = a[0] * 2;
    
    for (int i = 1; i < n; i++)
    {
        if (a[i] - a[i-1] > maxdiameter)
        {
            maxdiameter = a[i] - a[i-1];
        }
    }
    maxdiameter = max(maxdiameter, (long)(l - a[n-1]) * 2);
    cout << fixed << setprecision(15) << ((double) maxdiameter) / 2;
}