#include<bits/stdc++.h>

using namespace std;

bool check(int n)
{
    string s = to_string(n);
    bool ch = true;
    for(int i = 0; i < int(s.length()); i++)
    {
        if(s[i] != s[int(s.length())-1-i]) ch = false;
    }
    return ch;
}

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        int d = 0;
        for(int i = a; i <= b; i++)
            if(check(i)) d++;
        cout << d << endl;
    }
}
