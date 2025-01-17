#include<bits/stdc++.h>
using namespace std;
const int N=10;
char g[N][N];
bool row[N],col[N],gd[N*2],ugd[N*2];
int n,ans;
//当前所在的位置是(x,y),已经放置了s个皇后 
void dfs(int x,int y,int s){
	if(s>n)return;//棋盘会没放完，放置皇后的数量已经超出了n，不合法 
	if(y==n) x++,y=0;//换到下一行地第一个位置继续搜索 
	if(x==n){//棋盘放完了 
		if(s==n){//刚好放了n个皇后 
			ans++;
			cout<<"NO."<<ans<<endl;
			for(int i=0;i<n;i++) puts(g[i]);//puts()输出，自动换行 
		}
		return; 
	}
	g[x][y]='0';
	dfs(x,y+1,s);
	if(!row[x]&&!col[y]&&!gd[x-y+n]&&!ugd[x+y]){
		g[x][y]='1';
		row[x]=col[y]=gd[x-y+n]=ugd[x+y]=true;
		dfs(x,y+1,s+1);
		g[x][y]='0';
		row[x]=col[y]=gd[x-y+n]=ugd[x+y]=false;
	}
}
int main(){
	cin>>n;
	dfs(0,0,0);//从左上角开始放置了0个皇后 
	cout<<ans<<endl;
	return 0;
}

