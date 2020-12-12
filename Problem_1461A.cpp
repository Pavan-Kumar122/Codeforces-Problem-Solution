#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test, a, b, c, n, m, i, j, cnt;
    cin >> test;
    while (test--)
    {
        cnt = 0;
        cin >> n >> m;
        int v[n][m];
        string sx[n];
        for (auto &i : sx)
            cin >> i;
        for (i = 0; i < n; i++, a = 0)
            for (j = 0; j < m; j++)
            {
                if (sx[i][j] == '*')
                    a++;
                else
                    a = 0;
                v[i][j] = a;
            }
        for (i = 0; i < n; i++)
            for (j = 0; j < m; j++, c = 0)
            {
                a = i;
                b = j;
                while (a < n && b < m)
                {
                    if (v[a][b] > c)
                        cnt++;
                    else
                        break;
                    c += 2;
                    a++;
                    b++;
                }
            }
        cout << cnt << '\n';
    }
}