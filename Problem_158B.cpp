#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int car(0);
    vector<int> group;
    while (n !=0)
    {
        int m;
        cin>>m;
        group.push_back(m);
        n--;
    }
    for(int x: group){
        car+= x;
    }
    if (car%4 == 0)cout<<car/4;
    else cout<<(car/4)+1;

    return 0;
}