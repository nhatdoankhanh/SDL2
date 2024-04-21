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
    int m;
    cin >> m;
    int b[m];
    for(int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + m);
    vector<int> arr;
    int j = 0;
    for(int i = 0; i < m; i++)
    {
        if(a[j] == b[i])
        {
            j++;
        }
        else
        {
            arr.push_back(b[i]);
        }
    }
    cout << arr[0] << " ";
    for(int i = 1; i < int(arr.size()); i++)
    {
        if(arr[i] != arr[i-1])
        {
            cout << arr[i] << " ";
        }
    }
}
