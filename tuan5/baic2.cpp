#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    bool ch = true;
    for(int i = 0; i < int(s.length()); i++)
    {
        if(s[i] != s[int(s.length())-1-i]) ch = false;
    }
    cout << ch;
}
