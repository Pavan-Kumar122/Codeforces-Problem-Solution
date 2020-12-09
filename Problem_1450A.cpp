#include <bits/stdc++.h>
using namespace std;

bool isSubSequence(string str1, string str2, int m, int n)
{

    if (m == 0)
        return true;
    if (n == 0)
        return false;

    if (str1[m - 1] == str2[n - 1])
        return isSubSequence(str1, str2, m - 1, n - 1);

    return isSubSequence(str1, str2, m, n - 1);
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        string s;
        cin >> s;
        string str1 = "trygub";
        int m = str1.length();
        bool check = isSubSequence(str1, s, m, s.length());
        if (check)
        {
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] == 't')
                {
                    for (int j = i; j < s.length(); j++)
                    {
                        if (s[j] == 'r')
                        {
                            swap(s[i], s[j]);
                        }
                    }
                }
            }
            cout << s << "\n";
        }
        else
        {
            cout << s << "\n";
        }
    }

    return 0;
}
