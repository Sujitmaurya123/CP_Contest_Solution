/*
Table Strength

Question Link -->>

https://www.codechef.com/problems/STRONGTABLE
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int p;
        cin >> p;

        vector<int> legs(p);
        for (int i = 0; i < p; ++i)
        {
            cin >> legs[i];
        }
        sort(legs.begin(), legs.end());
        int mWeight = 0;
        for (int i = p - 1; i >= 0; --i)
        {
            int tWeight = legs[i] * (p - i);
            mWeight = max(mWeight, tWeight);
        }

        cout << mWeight << endl;
    }
    return 0;
}
