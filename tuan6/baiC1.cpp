#include<bits/stdc++.h>
using namespace std;
int n,m,k,a[100][100];
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};
void input(){
    cin>>n>>m>>k;
    int t=0;
    while(t<k){
        int x=rand() % n;
        int y=rand() % m;
        a[x][y]=1;
        t++;
    }
}
int domin(int x,int y){
    int minn =0;
    for(int i=0;i<8;i++){
        int x1=x+dx[i];
        int y1=y+dy[i];
        if(x1 >= 0 && x1 < n && y1 >= 0 && y1 < m && a[x1][y1] == 1) minn++;
    }
    return minn;

}
int main(){
    input();
    bool endgame = false;
    while(!endgame){
        int x,y;
        cin>> x >> y;
        if(a[x][y]==1){
            cout<<"You're dead!"<<endl;
            for(int i=1;i<=n;i++){
                for(int j=1;j<=m;j++)
                    cout<<a[i][j] << " ";
                cout<< endl;;
            }
            endgame = true;
        }
        else{
            int minf =domin(x,y);
            a[x][y]= minf;
            cout<< minf <<" ";
        }
    }
    return 0;
}
