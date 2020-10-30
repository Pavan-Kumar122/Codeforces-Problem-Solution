#include<bits/stdc++.h>
using namespace std;
long long n,i,t,k;
string s;
int main(){
	cin>>t;
	while(t--){
		k=0;
		cin>>n>>s;
		s[n]=s[0];
		for(i=0;i<n;i++) if(s[i]==s[i+1]) k++;
		cout<<k/2<<"\n";
	}
}