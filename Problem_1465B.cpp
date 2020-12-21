#include <bits/stdc++.h>

#define int long long
#define pb push_back
using namespace std;

bool check(int x){
    bool check = true;
    int n = x;
    while (x > 0){
        int y = x % 10;
        x /= 10;
        if(y == 0)
            continue;
        if(n % y != 0){
            check = false;
            break;
        }
    }
    return check;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        while (true){
            if(check(n)){
                cout << n << '\n';
                break;
            }
            n++;
        }
    }
}