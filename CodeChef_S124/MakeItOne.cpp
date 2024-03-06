/*
Make it One
Question Link ->
https://www.codechef.com/problems/MAKE_IT_ONE

*/

#include <bits/stdc++.h>
using namespace std;
void solveskm()
{
    int l, r;

    cin >> l >> r;
    int n = r - l + 1;

    if (n == 1)
        return cout << -1 << endl, void();
    vector<int> ask(n);
    iota(ask.begin(), ask.end(), l);
    for (int i = 0; i + 1 < n; i += 2)
        swap(ask[i], ask[i + 1]);

    if (n & 1)
    {
        bool fd = false;

        for (int i = 0; i + 1 < n; i++)
        {
            if (gcd(l + i, ask[n - 1]) == 1 and gcd(r, ask[i]) == 1)
            {
                swap(ask[i], ask[n - 1]);
                fd = true;
                break;
            }
        }

        if (!fd)
            return cout << -1 << endl, void();
    }
    for (int i = 0; i < n; i++)
        cout << ask[i] << " ";
    cout << endl;
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        solveskm();
    }
    return 0;
}
