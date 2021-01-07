#include <bits/stdc++.h>
#define int long long int
#define pb push_back
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        int w, h, n;
        cin >> w >> h >> n;
        int cnt = 0;
        while (w % 2 == 0)
        {
            w /= 2;
            cnt++;
        }
        while (h % 2 == 0)
        {
            h /= 2;
            cnt++;
        }
        int ans = 1;
        for (int i = 0; i < cnt; i++)
            ans *= 2;
        if (ans >= n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}