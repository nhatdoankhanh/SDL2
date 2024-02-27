#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double a, min = 999999, max = -999999;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        if(a < min) min = a;
        if(a > max) max = a;
    }
    cout << max << endl << min;
}
