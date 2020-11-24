#include <bits/stdc++.h> 
using namespace std; 

set<string> distinctSubstring(string str) 
{ 
	set<string> result; 


	for(int i = 0; i <= str.length(); i++) 
	{ 
		for(int j = 0; j <= str.length(); j++) 
		{ 
			result.insert(str.substr(i, j)); 
		} 
	} 

	return result; 
} 
int main() 
{ 
	string str;
    long long int n,k; 
    cin>>n>>k;
    cin>>str;
	set<string> subs = distinctSubstring(str); 
    string s;
    int val = 0;
    for (auto itr = subs.begin(); 
         itr != subs.end(); ++itr) 
    {
        s = *itr;
        if(s.size() == k)val++;
    }
    cout<<val;
     
} 
