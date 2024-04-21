#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    int n1 = s1.length();
    int n2 = s2.length();
    bool ch =true;
    if(n1 < n2 || s1 < s2)
    {
        string s4 = s1;
        s1 = s2;
        s2 = s4;
        ch = false;
        for(int i = 0; i < n2 - n1; i++)
        {
            s1 = "0" + s1;
        }
    }
    else
    {
        for(int i = 0; i < n1 - n2; i++)
        {
            s2 = "0" + s2;
        }
    }
    int d = 0;
    string s;
    cout << s1 << " " << s2 << endl;
    for(int i = max(n1, n2) - 1; i >= 0; i--)
    {
        int d1 = s1[i] - '0';
        int d2 = s2[i] - '0';
        string s3 = to_string(abs(d1 - d - d2));
        if(d1 - d - d2 >= 0)
        {
            d = 0;
        }
        else
        {
            d = 1;
        }
        s =  s3 + s;
    }
    int a = 0;
    while(s[a] == '0') a++;
    string s5 = s.substr(a);
    if(ch == false) s5 = "-" + s5;
    cout << s5;

}
