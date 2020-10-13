#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a,b;
    cin>>a>>b;
    int year = 0;
    while (1)
    {
        a = a * 3;
        b =  b * 2;
        year++;
        if (a > b) break;
    }
    cout<<year;
    
    return 0;
}