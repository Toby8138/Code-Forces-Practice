#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, int> map;

    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (map.find(s) != map.end())
        {
            cout << s << map[s] << "\n";
            map[s]++;

        }
        else {
            map[s] = 1;
            cout << "OK\n";
        }
    }
}