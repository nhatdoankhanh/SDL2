#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool ch = false;
    sort(a, a + n);
    for(int i = 0; i < n-1; i++)
        if(a[i] == a[i+1])
            ch = true;
    if(ch == true) cout << "YES";
    else cout << "NO";
}
