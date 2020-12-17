
#include <bits/stdc++.h>

using namespace std;

#define PB push_back
#define f first
#define s second
#define what_is(x) cerr << #x << " is " << x << endl;

typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;

const int INF = 1000000007;
const ll MOD = 1000000007;

void solve_test() {
    int a, b, c;
    cin >> a >> b >> c;
    if((a+b+c)%9 != 0) {
        cout << "NO\n";
    }
    else if(min({a, b, c}) < (a+b+c)/9) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tests;
    //tests = 1;
    cin >> tests;
    while (tests--) {
        solve_test();
    }
    return 0;
}
