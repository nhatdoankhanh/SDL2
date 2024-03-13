#include<bits/stdc++.h>

using namespace std;

bool isValid(int x, int y, int m, int n) {
    return (x >= 0 && x < m && y >= 0 && y < n);
}

int main()
{
    int m, n;
    cin >> m >> n;
    char arr[m][n];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {

            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            int count1 = 0;
            if(arr[i][j] != '*')
            {
                vector<int> dx = {-1, -1, -1, 0, 0, 1, 1, 1};
                vector<int> dy = {-1, 0, 1, -1, 1, -1, 0, 1};
                int count1 = 0;

                for (int x = 0; x < 8; x++) {
                     int newX = i + dx[x];
                     int newY = i + dy[x];
                     if (isValid(newX, newY, m, n) && arr[newX][newY] == '*') {
                         count1++;
                    }
                 }
                 cout << count1 <<  " ";
            }
            else cout << arr[i][j] << " ";

        }
        cout << endl;
    }
}
