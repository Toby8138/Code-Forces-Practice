#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int first, second;
    cin >> first;
    first = first%2;
    cin >> second;
    int p;
    second = second%2;
    

    if (first != second)
    {
        cin >> p;
        if (p%2==first){
            cout << 2;
        }
        else {
            cout << 1;
        }
        return 0;
    }

    for (int i = 3; i <= n; i++)
    {
        cin >> p;
        if (p%2 != first)
        {
            cout << i;
            return 0;
        }
    }
}