#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >>  m;
    int arr[n][m];
    int d = 1;
    int top = 0, left = 0, right = m, bottom = n;
    while(d <= n * m)
    {
        for(int i = left; i < right; i++)
        {
            arr[top][i] = d;
            d++;
        }
        top++;

        for(int i = top; i < bottom; i++)
        {
            arr[i][right-1] = d;
            d++;
        }
        right--;

        for(int i = right- 1; i >=  left; i--)
        {
            arr[bottom-1][i] = d;
            d++;;
        }
        bottom--;

        for(int i = bottom - 1; i >= top; i--)
        {
            arr[i][left] = d;
            d++;
        }
        left++;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
