#include<bits/stdc++.h>

using namespace std;

int n, m, x1;
int  y1, x2, y2;
char a[1001][1001];
vector<int> adj[1001];
bool visited[1001];
bool check[1001][1001];
int d[1001][1001];
int dx[] = {-1, 0, 0, 1};
int dy[] = { 0, -1, 1, 0};
vector<pair<int, int>> shortest_way;


void bfs(int i, int j)
{
    queue<pair<int, int>> q;
    q.push({i, j});
    a[i][j] = 'x';
    d[i][j] = 0;
    while(!q.empty())
    {
        pair<int, int> top =  q.front();
        q.pop();
        for(int k = 0; k < 4; k++)
        {
            int i1 = top.first + dx[k];
            int j1 = top.second + dy[k];
            if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] != 'x')
            {
                d[i1][j1] = d[top.first][top.second] + 1;
                if(a[i1][j1] == 'B')
                {
                    return;
                }
                q.push({i1, j1});
                a[i1][j1] = 'x';

            }
        }
    }
}

void shortestWay() {
  int x = x2, y = y2;
  bool found = false;
  shortest_way.push_back({x2, y2});
  while (a[x][y] != 'A') {
    found = false;
    for (int k = 0; k < 4; k++) {
      int i1 = x + dx[k];
      int j1 = y + dy[k];
      if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m &&
          d[i1][j1] == d[x][y] - 1) {
        x = i1;
        y = j1;
        shortest_way.push_back({x, y});
        found = true;
        break;
      }
    }
    if (!found) break;

  }

    for(int i = shortest_way.size() - 2; i >= 0; i--)
    {
        cout << shortest_way[i].first << " " << shortest_way[i].second << endl;
    }


}

void inp()
{
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            if(a[i][j] == 'A')
            {
                x1 = i;
                y1 = j;
            }
            else if(a[i][j] == 'B')
            {
                x2 = i;
                y2 = j;
            }
        }
    memset(visited , false, sizeof(visited) );
    bfs(x1, y1);
    cout << d[x2][y2];
}

int main()
{
  inp();
  shortestWay();
}
