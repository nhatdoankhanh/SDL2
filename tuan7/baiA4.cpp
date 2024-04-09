#include<bits/stdc++.h>

using namespace std;

bool nhiPhan(int* a, int n, int k)
{
    long Left = 0, Right = n - 1;
    while(Left <= Right)
    {
        int Mid = (Left + Right) / 2;
        if(*(a + Mid) == k) return true;
        if(*(a + Mid) < k )
        {
            Left = Mid + 1;
        }
        else
        {
            Right = Mid - 1;
        }
    }
    return false;

}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cin >> k;
    sort(a, a + n);
    cout << nhiPhan(a, n, k);

}
