#include<bits/stdc++.h>
using namespace std;
long long n;
int main(){
	cin>>n;
    int p,q;
    int count  = 0;
    while(n--){
        cin>>p>>q;
        if(p<q){
            if(p+1 == q){
                continue;
            }
            else count++;
        }
    }
    cout<<count;
	
}