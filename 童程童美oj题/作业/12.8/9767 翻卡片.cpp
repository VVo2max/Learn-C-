#include<bits/stdc++.h>
using namespace std;
const int N=55;
char g[N][N];
bool st[N][N];
int d[4][2]={-1,0,0,1,1,0,0,-1};
int n,maxn=-1e9,ans;
void dfs(int x,int y){
	for(int i=0;i<4;i++){
		int nx=x+d[i][0],ny=y+d[i][1];
		if(!st[nx][ny]&&g[nx][ny]=='A'){
            ans++;
            st[nx][ny]=1;
			dfs(nx,ny);       
        }	
    }
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)	
			cin>>g[i][j];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++){
			if(g[i][j]=='B'){
				memset(st,false,sizeof st);
				st[i][j]=true;
				ans=1;
				dfs(i,j);
				maxn=max(maxn,ans);
			}
		}
	cout<<maxn<<endl;
	return 0;
}
