#include<bits/stdc++.h>
using namespace std;
const int N=40;
int g[N][N];
bool st[N];//st[i]=true表示第i个人有工作了 
int n;
int maxn=-1e9;
//当前正在分配第u件工作，之前的收益是t 
void dfs(int u,int t){
	//遍历所有人，看第u件工作可以分配给谁 
	for(int i=1;i<=n;i++){
		if(!st[i]){//第i个人没有工作 
			t+=g[u][i];//累加第u件工作分配给第i个人第收益 
			st[i]=true;//标记第i个人已经有工作了 
			if(u<n) dfs(u+1,t);//按照同样的方式继续分配下一项工作 
			else if(u==n) maxn=max(maxn,t);//工作分配完毕 更新最优解
			//回溯 
			t-=g[u][i];
			st[i]=false;
		}
	} 
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++){
			cin>>g[i][j];
		}
	dfs(1,0);
	cout<<maxn<<endl;
	return 0;
} 
