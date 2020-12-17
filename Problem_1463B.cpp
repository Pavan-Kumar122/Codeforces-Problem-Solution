#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        while (n--)
        {
            int a, b = 1;
            scanf("%d", &a);
            while (b <= a)
                b *= 2;
            printf("%d ", b / 2);
        }
        printf("\n");
    }

    return 0;
}