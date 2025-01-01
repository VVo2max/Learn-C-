#include<bits/stdc++.h>
using namespace std;
const int N=1010;
int n,m;
int g[N][N];
int ans;
//上 右 下 左 左上 右上 左下 右下
//int d[8][2]={-1,0,0,1,1,0,0,-1,-1,-1,-1,1,1,-1,1,1}; 
int d[4][2]={-1,0,0,1,1,0,0,-1};
void dfs(int x,int y){
	g[x][y]=0;
	for(int i=0;i<4;i++){
		//(x,y)的下一个相邻点坐标 
		int nx=x+d[i][0];
		int ny=y+d[i][1];
		if(nx<0||nx>=n||ny<0||ny>=m) continue;
		if(g[nx][ny]==0) continue; 
		dfs(nx,ny);
		
	}
}
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>g[i][j];//一行 
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++){
			if(g[i][j]!=0){
				dfs(i,j);
				ans++;
			}
		}
	cout<<ans<<endl;
	return 0;
} 
