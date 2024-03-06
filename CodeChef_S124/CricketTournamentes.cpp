/*
Cricket Tournament
Question Link -->>

https://www.codechef.com/problems/CRICKETUDYAM

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

        int n, m;
        cin >> n >> m;

        if (n - 1 >= m)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
