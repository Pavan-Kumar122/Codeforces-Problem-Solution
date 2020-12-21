#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        string s;
        cin>>s;
        if(s.length() == 1 && s == ")"){
            cout<<"Yes"<<"\n";
        }
        else if (s.length() == 2 && s == "))") {
            cout<<"Yes"<<"\n";
        }
        else{
            int j = s.length()-1;
            int count  = 0;
            for (int i = 0; i < s.length(); i++)
            {
                if(s[j--] == ')'){
                    count++;
                }
                else{
                    break;
                }
            }
            if(count > (s.length() - count)){
                cout<<"Yes"<<"\n";
            }
            else{
                cout<<"NO"<<"\n";
            }
            
        }
        
    }

    return 0;
}