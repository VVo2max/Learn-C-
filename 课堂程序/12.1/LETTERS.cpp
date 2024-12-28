#include<bits/stdc++.h>
using namespace std;
const int N=110;
int maxn=-1e9;
int r,s;
char g[N][N];
bool st[N];
int d[4][2]={-1,0,0,1,1,0,0,-1};
void dfs(int x,int y,int t){
	maxn=max(maxn,t);
	for(int i=0;i<4;i++){
		int a=x+d[i][0],b=y+d[i][1];
		if(a>=1&&a<=r&&b>=1&&b<=s&&!st[g[a][b]-'A']){
			st[g[a][b]-'A']=true;		
			dfs(a,b,t++);
			st[g[a][b]-'A']=false;
		}
	}
}
int main(){
	cin>>r>>s;
	for(int i=1;i<=r;i++)cin>>g[i];
	st[g[1][1]-'A']=true;
	dfs(1,1,1);
	cout<<maxn<<endl;
	return 0;
}

