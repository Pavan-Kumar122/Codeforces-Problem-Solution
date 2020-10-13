#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{   
    int n,m;
    cin>>n>>m;
    while (m !=0)
    {
        if (n%10 == 0) n = n/10;
        else n--;
        m--;
    }
    cout<<n;
    
    return 0;
}