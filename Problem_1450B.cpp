#include <bits/stdc++.h>
using namespace std;

// bool isSubSequence(string str1, string str2, int m, int n)
// {

//     if (m == 0)
//         return true;
//     if (n == 0)
//         return false;

//     if (str1[m - 1] == str2[n - 1])
//         return isSubSequence(str1, str2, m - 1, n - 1);

//     return isSubSequence(str1, str2, m, n - 1);
// }

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n,k,x,y;
        cin>>n>>k;
        vector<int>xi,yi;
        for (int i = 0; i < n; i++)
        {
            cin>>x>>y;
            xi.push_back(x);
            yi.push_back(y);
        }
        
        for (int i = 0; i < n; i++)
        {
            for(int j = 0;j<n;j++){

                if (abs(xi[i] - xi[j]) + abs(yi[i] - yi[j]) <= k){
                    xi[j] = xi[i];
                    yi[j] = yi[i];
                    continue;
                }
                

            }
        }
        int yes = 0;
        for (int i = 0; i < n; i++)
        {
            for(int j = i+1;j<n;j++){

                
                if(xi[i] == xi[j] || yi[i] == yi[j]){
                    yes++;
                }

            }
        }
        
        if(yes == n){
            cout<<"1"<<"\n";
        }else
        {
            cout<<"-1"<<"\n";
        }
        
        
    }

    return 0;
}
