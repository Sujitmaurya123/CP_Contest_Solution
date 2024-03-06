/*

Binary Parity

Question Link ->
https://www.codechef.com/problems/BINPARITY
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
        int n;
        cin >> n;
        int sk = 0;

        while (n > 0)
        {
            sk += (n & 1);
            n = n >> 1;
        }
        if (sk % 2 == 0)
        {
            cout << "EVEN" << endl;
        }
        else
        {
            cout << "ODD" << endl;
        }
    }
}
