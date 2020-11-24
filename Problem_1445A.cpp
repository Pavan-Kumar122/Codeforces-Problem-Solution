#include<bits/stdc++.h>
using namespace std;
int T,n,x,p,a[10005],b[10005];
int main() {
	cin>>T;
	while(T--){
		cin>>n>>x;
		bool flag=1;
		for(int i=1;i<=n;i++)cin>>a[i];
		for(int i=n;i>=1;i--)cin>>b[i];
		for(int i=1;i<=n;i++)if(a[i]+b[i]>x)flag=0;
		if(flag)puts("Yes");
		else puts("No");
	} 
}