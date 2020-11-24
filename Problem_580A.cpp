#include <bits/stdc++.h>
int m, n, t, x, y;
main()
{
    for (std::cin >> n >> x; --n; y < x ? t = 0 : ++t < m ?: m = t, x = y)
        std::cin >> y;
    std::cout << m + 1;
}