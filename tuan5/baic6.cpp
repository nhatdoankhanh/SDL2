#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            a[i][j] = -1;
    int d = 1;
    int d1 = 0;
    int d2 = n / 2;
    while(d <= n * n)
    {
        a[d1][d2] = d;
        d++;
        int newd1 = (d1 - 1) % n;
        if(d1-1 < 0) newd1 = n - 1;
        int newd2 = (d2 + 1) % n;
        if((d2 + 1) > n - 1) newd2 = 0;
        if(a[newd1][newd2] != -1){
            d1 = (d1 + 1) % n;
            if(d1 > n -1) d1 = 0;
        }
        else{
            d1 = newd1;
            d2 = newd2;
        }
    }
    for(int i = 0; i < n;i ++)
    {
        for(int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
