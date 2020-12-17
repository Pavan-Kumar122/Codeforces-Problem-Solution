#include<bits/stdc++.h>
using namespace std;
#define A(x) (x).begin(),(x).end()
#define sz(x) ((int)(x).size())
#define long long long
void _read();


int main () { _read(); 

	int tc;
	cin >> tc;
	while(tc--) {
		int n;
		cin >> n;
		vector<int> v(n);
		for( int &x : v ) cin >> x;
		for( int i = 0, j = n-1; i <= j; i++,j--) {
			if( i == j ) {
				cout << v[i] << ' ';
			} else {
				cout << v[i] << ' ' << v[j] << ' ';
			}
		}
		cout << '\n';
	}
	return 0;
};

void _read() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
}
