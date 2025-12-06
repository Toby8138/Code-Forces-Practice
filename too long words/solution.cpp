#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    string words[n];
    for (int i = 0; i < n; i++)
    {
        cin >> words[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if (words[i].length() < 11)
        {
            cout << words[i] << "\n";
        }
        else {
            cout << words[i].substr(0, 1) << words[i].length() - 2 << words[i].substr(words[i].length() - 1) << "\n";
        }
    }
    
}