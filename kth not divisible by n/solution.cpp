#include <bits/stdc++.h>

using namespace std;

int main()
{
    uint16_t j = 0;
    cin >> j;
    uint64_t n, k;
    for (int i = 0; i < j; i++)
    {
        cin >> n >> k;

        uint64_t d = k / (n-1);
        uint32_t remainder = k % (n-1);
    
        if (remainder == 0)
        {
            cout << (d * n) - 1 << "\n";
        }
        else {
            cout << (d * n) + remainder << "\n";
        }
    }
}