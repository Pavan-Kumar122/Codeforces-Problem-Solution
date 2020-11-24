#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,h;
    cin>>n>>h;
    int width = 0;
    int ai;
    while (n--)
    {
        cin>>ai;
        if(ai <= h) width++;
        if(ai > h){
            width += 2;
        }
    }

    cout<<width;
    
    return 0;
}