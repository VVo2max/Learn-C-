#include<bits/stdc++.h>
using namespace std;
const int N=25;
int n,m;
int d[4][2]={-1,0,0,1,1,0,0,-1};
char g[N][N];
bool st[N][N]; 
bool flag;
void dfs(int x,int y){
	if(x==n&&y==m){
		flag=true;
		return;
	}
	for(int i=0;i<4;i++){
		int nx=x+d[i][0];
		int ny=y+d[i][1];
		if(nx>=1&&nx<=n&ny>=1&&ny<=m&&!st[nx][ny]&&g[nx][ny]=='.'){
			st[nx][ny]=true;
			dfs(nx,ny);
			st[nx][ny]=false;
		}
	}
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>g[i];
	st[1][1]=true;
	dfs(1,1);
	if(flag) puts("Yes");
	else puts("NO");
	return 0;
}
