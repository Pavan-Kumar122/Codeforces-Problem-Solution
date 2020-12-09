#include<iostream>
using namespace std;
int main(){
    long int T,n,k;
    cin>>T;

    while (T--)
    {
        cin>>n>>k;
        long int a[n+1];
        for (int i = 1; i <= n; i++)
        {
            cin>>a[i];
        }

        int min_val = INT_MAX;

        for (int i = 1; i <= 100; i++)
        {
            int not_same = 0;
            for (int j = 1; j <= n; j++)
            {
                if(a[j] != i){
                    j = j + k -1;
                    not_same++;
                }
            }

            min_val = min(min_val, not_same);
            
        }

        cout<<min_val<<"\n";
        
    }   
    
}