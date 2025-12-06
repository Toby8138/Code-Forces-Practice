#include <bits/stdc++.h>
#include <sstream>  


using namespace std;

int main()
{
    int n;
    cin >> n;

    int total = 0;
    int a, b, c;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        if (a + b + c > 1) total++;
    }

    cout << total;
}