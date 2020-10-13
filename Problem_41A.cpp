#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string s,s2;
    cin>>s>>s2;
    reverse(s.begin(), s.end());
    int check = s.compare(s2);
    if (check == 0)cout<<"YES";
    else cout<<"NO";
    return 0;
}