#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        string sub = " ";
        for (int j = i; j < n; j++)
        {
            sub = sub + s[j];
            cout << sub << endl;
            count++;
        }
    }
    cout << count << endl;

    return 0;
}

//TC=O(n^2)
//SC=O(1)