#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        if (s[1] == '+'){
            count++;
        }else{
            count--;
        }
    }
    cout<<count;
    
    
    return 0;
}
