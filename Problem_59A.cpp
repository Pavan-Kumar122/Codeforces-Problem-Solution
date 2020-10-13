#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    cin>>s;
    int count_lower(0), count_upper(0);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]>='A' && s[i]<='Z') count_upper++;
        if (s[i]>='a' && s[i]<='z') count_lower++;
    }

    for (int i = 0; i < s.size(); i++)
    {
        if(count_upper > count_lower) s[i]= toupper(s[i]); 
        else  s[i] = tolower(s[i]);

    }
    
    cout<<s;
    return 0;
}