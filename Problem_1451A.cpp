#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T,n;
    cin >> T;
    while (T--)
    {
        cin>>n;
        cout<<min(n-1,(2+(n%2)))<<"\n";
    }
}