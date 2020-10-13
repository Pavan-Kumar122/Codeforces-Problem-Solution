#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int win_A(0),win_B(0);
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'A'){
            win_A++;
        }else win_B++;
    }
    if (win_A > win_B)cout<<"Anton";
    if (win_A < win_B)cout<<"Danik";
    if (win_A == win_B)cout<<"Friendship";
    
    return 0;
}