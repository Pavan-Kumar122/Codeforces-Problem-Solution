#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define endl "\n"
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int> arr,arr2;
        while (n--)
        {
            int a;
            cin>>a;
            arr.push_back(a);
            if(a % x == 0){
                arr2.push_back(a/x);
                arr2.push_back(a/x);
            }
        }

        for (int i = 0; i < arr2.size(); i++)
        {
            if(arr2[i] % x == 0){
                arr2.push_back(arr2[i]/x);
                arr2.push_back(arr2[i]/x);
            }
            if(arr2[i] % x != 0)break;
        }
        // cout<<"\n";
        int sum = 0;
        for(auto i:arr){
            sum+= i;
        }
        for(auto i:arr2){
            sum+= i;
        }
        cout<<sum<<"\n";
    }
}