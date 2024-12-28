#include<bits/stdc++.h>
using namespace std;
const int N=110;
int n,m;
char g[N][N];
int ans;
int d[8][2]={0,1,1,1,1,0,1,-1,0,-1,-1,-1,-1,0,-1,1};
void dfs(int x,int y){
	for(int i=0;i<8;i++){
		int nx=x+d[i][0];
		int ny=y+d[i][1];
		if(nx>=1&&nx<=n&ny>=1&&ny<=m&&g[nx][ny]=='W'){
			g[nx][ny]='.';
			dfs(nx,ny);
		}
	}
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>g[i][j];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++){
			if(g[i][j]=='W'){
				dfs(i,j);
				ans++;
			}
		}
	cout<<ans<<endl;
	return 0;
} 

/**
* @runId: 8664728
* @language: C++
* @author: 13926869280
* @submitTime: 2024-11-24 13:03:37
*/
