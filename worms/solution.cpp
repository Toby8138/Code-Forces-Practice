#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int worms[n];

    cin >> worms[0];
    int t;
    for (int i = 1; i < n; i++)
    {   
        cin >> t;
        worms[i] = worms[i-1] + t;
    }

    int m;
    cin >> m;
    int w;
    for (int i = 0; i < m; i++)
    {
        cin >> w;

        int lp = 0;
        int up = n-1;
        int middle = (lp + up) / 2;

        while(lp <= up)
        {
            if (w == worms[middle]) break;
            else if (w < worms[middle])
            {
                up = middle - 1;
            }
            else {
                lp = middle + 1;
            }
            middle = (lp + up) / 2;
        }

        if(worms[middle] >= w)
        {
            cout << middle + 1 << "\n";
        }
        else {
            cout << middle + 2 << "\n";
        }
    }


}