#include<bits/stdc++.h>
using namespace std;
const int N=100;
int d[8][2]={-2,1,-1,2,1,2,2,1,2,-1,1,-2,-1,-2,-2,-1};
int n,m,ax,ay,ans;
bool st[N][N];
//当前所在位置是(x,y),已经过了cnt个点(包含当前点)
void dfs(int x,int y,int cnt){
	if(cnt==n*m){
		ans++;
		return;
	}
	st[x][y]=true;
	//往周围八个个方向扩展 
	for(int i=0;i<8;i++){
		int a=x+d[i][0],b=y+d[i][1];
		if(a<0||a>=n||b<0||b>=m) continue;
		if(st[a][b]) continue;
		dfs(a,b,cnt+1); 
	}
	st[x][y]=false;
}
int main(){
	int T;
	cin>>T;
	while(T--){
		memset(st,false,sizeof st);
		ans=0;
		cin>>n>>m>>ax>>ay;
		dfs(ax,ay,1);
		cout<<ans<<endl;
	}
	return 0;
}
