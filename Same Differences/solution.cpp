#include <bits/stdc++.h>

using namespace std;

int main()
{
    int total;
    cin >> total;
    for (int i = 0; i < total; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }

        int sum = 0;

        for (int p = 0; p < n - 1; p++)
        {
            for (int o = p + 1; o < n; o++)
            {
                if (arr[o] - arr[p] == o - p)
                    sum++;
            }
        }

        cout << sum << "\n";
    }
}