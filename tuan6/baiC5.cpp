#include<bits/stdc++.h>

using namespace std;

int nguyenTo(int a)
{
    if(a < 2) return 0;
    for(int i = 2; i <= sqrt(a); i++)
    {
        if(a % i == 0) return 0;
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    for(int i = 2; i <= n; i++)
        if(nguyenTo(i)) cout << i << " ";
    return 0;
}
