#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    for(int i = 0; i < n; i++)
    {
        arr[i][0] = 1;
        arr[i][i] = 1;
    }
    cout << arr[0][0] << "\n" << arr[1][0] << " "  << arr[1][1] << endl;
    for(int i = 2; i < n; i++)
    {
        cout << arr[i][0] << " ";
        for(int j = 1; j < i; j ++)
        {
            arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
            cout << arr[i][j] << " ";
        }
        cout << arr[i][i] << endl;
    }
}
