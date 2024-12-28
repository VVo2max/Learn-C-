#include<bits/stdc++.h>
using namespace std;
const int N=25;
int n,m,ax,ay,bx,by;
int d[4][2]={-1,0,0,1,1,0,0,-1};
int g[N][N];
bool st[N][N]; 
bool flag;
void dfs(int x,int y){
	if(x==bx&&y==by){
		flag=true;
		return;
	}
	for(int i=0;i<4;i++){
		int nx=x+d[i][0];
		int ny=y+d[i][1];
		if(nx>=1&&nx<=n&ny>=1&&ny<=m&&!st[nx][ny]&&g[nx][ny]==1){
			st[nx][ny]=true;
			dfs(nx,ny);
			st[nx][ny]=false;
		}
	}
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>g[i][j];
	cin>>ax>>ay>>bx>>by;
	st[ax][ay]=true;
	dfs(ax,ay);
	if(flag) puts("Yes");
	else puts("NO");
	return 0;
}
