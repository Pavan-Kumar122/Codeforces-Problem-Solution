#include <bits/stdc++.h>
using namespace std;
int G, n, m, ans[10];
int main()
{
    scanf("%d", &G);
    while (G--)
    {
        scanf("%d", &n);
        m = 0;
        if (n > 45)
            puts("-1");
        else
        {
            for (int i = 9; i >= 1; i--)
                if (n > i)
                    ans[++m] = i, n -= i;
                else
                {
                    ans[++m] = n;
                    break;
                }
            for (int i = m; i >= 1; i--)
                printf("%d", ans[i]);
            puts("");
        }
    }
    return 0;
}
