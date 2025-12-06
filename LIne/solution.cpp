#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num_of_test_cases;
    cin >> num_of_test_cases;

    long long startx, starty, endx, endy;
    long n;

    for (int i = 0; i < num_of_test_cases; i++)
    {
        cin >> n;
        cin >> startx >> starty >> endx >> endy;
        long long max = 0;
        long sum = 0;
        int l;
        for (int j = 0; j < n; j++)
        {
            cin >> l;
            if (l > max)
                max = l;
            sum += l;
        }

        long upper = sum;
        long lower = max - sum + max;

        long long distance = (startx - endx) * (startx - endx) + (starty - endy) * (starty - endy);
        double d = sqrt((double)distance);

        if (lower <= d && upper >= d)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
}