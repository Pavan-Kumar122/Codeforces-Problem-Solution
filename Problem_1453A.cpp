#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        int count = 0;
        vector<int> a1,a2;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin>>x;
            a1.push_back(x);
        }
        x = 0;
        for (int i = 0; i < m; i++)
        {
            cin>>x;
            a2.push_back(x);
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(a1[i] == a2[j])count++;
            }
            
        }
        

        cout<<count<<"\n";

    }

    return 0;
}
