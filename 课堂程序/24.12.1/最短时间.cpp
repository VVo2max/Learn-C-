#include<bits/stdc++.h>
using namespace std;
const int N=40;
int g[N][N];
int d[4][2]={-1,0,0,1,1,0,0,-1};
bool st[N][N];
int n,m,zx,zy,sx,sy,minn=999999999;
//当前所在位置是(x,y),已经花费了t时间 
void dfs(int x,int y,int t){ 
	if(x==sx&&y==sy){
		minn=min(t,minn);
		return;
	}
	for(int i=0;i<4;i++){
		int nx=x+d[i][0],ny=y+d[i][1];
		if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&!st[nx][ny]){
			st[nx][ny]=true;
			dfs(nx,ny,t+g[nx][ny]);
			st[nx][ny]=false;
		}	
	}
}
int main(){
	cin>>n>>m>>zx>>zy>>sx>>sy;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>g[i][j];
	st[zx][zy]=true;
	dfs(zx,zy,g[zx][zy]);
	cout<<minn<<endl;
	return 0;
}
/*
4 4
1 1 4 4
1 6 6 6
15 7 6 6
15 3 6 6
15 15 1 1 
*/ 
