#include<bits/stdc++.h>
using namespace std;
const int N=1010;
int n,m;
char g[N][N];
int ans;
//�� �� �� �� ���� ���� ���� ����
int d[4][2]={-1,0,0,1,1,0,0,-1}; 
//int d[4][2]={-1,0,0,1,1,0,0,-1};
void dfs(int x,int y){
	g[x][y]='X';
	for(int i=0;i<4;i++){
		//(x,y)����һ�����ڵ����� 
		int nx=x+d[i][0];
		int ny=y+d[i][1];
		if(nx<0||nx>=n||ny<0||ny>=m) continue;
		if(g[nx][ny]=='X') continue; 
		dfs(nx,ny);
		
	}
}
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>g[i][j];//һ�� 
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++){
			if(g[i][j]=='R'){
				dfs(i,j);
				ans++;
			}
		}
	cout<<ans<<endl;
	return 0;
} 
