#include<bits/stdc++.h>
using namespace std;
long long int n,m;
int main(){
    cin>>n>>m;
	string victims[n];
    string victims_sus_val[n] = {0};
    string query;
    int i = 0;
    while (n--)
    {
        cin>>victims[i];
        i++;
    }
    int query_number = 0;
    int query_1 = 0;
    int query_11 = 0;
    while (m--)
    {
        cin>>query_number;
        
        if(query_number == 1){
            cin>>query_1;
            cin>>query_11;
            victims_sus_val[query_1] = query_11;
        }
        else
        {
            cin>>query;
            int pos = 0;
            int index;
            // for (int k = 0; k < n; k++)
            // {
                
            // }
            
            
            
        }
        
    }
    
    
	
}