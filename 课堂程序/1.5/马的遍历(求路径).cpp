#include<bits/stdc++.h>
using namespace std;
const int N=30;
int n,m,ans;
int st[N][N];
void dfs(int x,int y){
	if(x==n&&y==m){
		ans++;
		return;
	}
	//        没有越界            //没走过 
	if(x>=0&&x<=n&&y>=0&&y<=m&&!st[x][y]){
		st[x][y]==true;
		dfs(x+1,y+2);
		dfs(x+2,y+1);
		dfs(x+2,y-1);
		dfs(x+1,y-2);
		st[x][y]=false;
	}
}
int main(){
	cin>>n>>m;
	dfs(0,0);
	cout<<ans<<endl;
	return 0;
}

