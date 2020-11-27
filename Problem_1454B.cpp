#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        vector<int> count(n+1), index(n+1);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            ++count[x];
            index[x] = i+1;
        }
        
        int ans = -1;

        for (int i = 0; i <= n; i++)
        {
            if(count[i] == 1){
                ans = index[i];
                break;
            }
        }
        
        cout<<ans<<endl;
    }
    
    return 0;
}
