#include<iostream>
using namespace std;
int main(){
    int T,n,m,r,c,x,y;
    cin>>T;

    while (T--)
    {
        cin>>n>>m>>r>>c;

        cout<<(max((n-r), r-1) + max((m-c), c-1))<<"\n";
    }   
    
}