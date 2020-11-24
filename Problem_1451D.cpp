#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long n, k;
        cin >> n >> k;
        long long a = sqrt(n * n / 2) / k;
        long long b = sqrt(n * n - a * a * k * k) / k;
        if ((a + b) & 1)
            cout << "Ashish\n";
        else
            cout << "Utkarsh\n";
    }
}