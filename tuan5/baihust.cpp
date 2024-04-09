#include<bits/stdc++.h>

using namespace std;

bool nguyenTo(int n)
{
    if(n < 2 ) return false;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n %  i == 0) return false;
    }
    return true;
}

int main()
{
    vector<bool> a(10, false);
    for(int i = 2; i < 1000000; i++)
    {
        if(nguyenTo(i)) a[i] = true;
    }
    int n;
    cin >> n;
    int d;
    for(int i = 0; i < n; i++)
    {
        cin >> d;
        if(a[d]) cout << d << " ";
    }
}


