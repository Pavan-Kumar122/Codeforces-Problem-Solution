#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    string a;
    for(int i=0; s[i] != '\0';i++){

        if (s[i] == 'a' ||s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u' || s[i] == 'A' ||s[i] == 'E' ||s[i] == 'I' ||s[i] == 'O' ||s[i] == 'U'||s[i] == 'y'||s[i] == 'Y' ) continue;

        else{
            if (s[i] >= 65 && s[i] <= 90 ) s[i]+= 32;
            a+= '.';
            a+= s[i];
        }
        // cout<<s[i] <<endl;
    }

    cout<<a;
    return 0;
}
