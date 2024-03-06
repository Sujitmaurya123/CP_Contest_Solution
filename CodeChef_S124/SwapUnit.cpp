/*
Swap And Unite

Question Link ->
https://www.codechef.com/problems/SWAPUNITE
*/

#include <bits/stdc++.h>
using namespace std;
// s for string given input
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {

        string s;
        cin >> s;
        int n = s.size();
        int fs = INT_MAX;
        for (int i = 0; i < 26; i++)
        {
            char x = 'a';
            x += i;
            int cnt = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == x)
                {
                    cnt++;
                }
            }
            if (cnt == 0)
            {
                continue;
            }
            int l = 0;
            int r = cnt - 1;
            int ctextra = 0;
            for (int i = l; i <= r; i++)
            {
                if (s[i] != x)
                {
                    ctextra++;
                }
            }
            int ans = ctextra;
            while (r <= n - 1)
            {
                ans = min(ans, ctextra);
                if (s[l] != x)
                {
                    ctextra--;
                }
                l++;
                r++;
                if (r <= n - 1 && s[r] != x)
                {
                    ctextra++;
                }
            }
            fs = min(ans, fs);
        }
        cout << fs << endl;
    }
    return 0;
}
