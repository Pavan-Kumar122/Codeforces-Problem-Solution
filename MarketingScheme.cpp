#include <bits/stdc++.h>
int main()
{
	int T, a, b;
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d %d", &a, &b);
		if(b >= 2 * a) puts("NO");
		else puts("YES");
	}
}