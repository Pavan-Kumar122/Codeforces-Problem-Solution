#include <bits/stdc++.h>

#define int long long
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
        string s; cin >> s;
		if(s.size()&1) cout << "NO" << '\n';
		else if(s[0] == ')' || s[s.size()-1] == '(') cout << "NO" << '\n';
		else cout << "YES" << '\n';
    }
}