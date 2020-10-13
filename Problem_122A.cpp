#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int lucky_number[] = {4,7,47,74,44,444,447,474,477,777,774,744};
    int yes = false;
    for (int i = 0; i < 12 ; i++)
    {
        if (n % lucky_number[i] == 0) yes = true;
    }
    if (yes) cout<<"YES";
    else cout<<"NO";

    return 0;
}