#include<bits/stdc++.h>
using namespace std;
const int N=10;
int a[N],n,m;
bool st[N];
void dfs(int u){
	if(u==m+1){
		for(int i=1;i<=m;i++) cout<<a[i]<<" ";
		cout<<endl;
		return;
	}
	for(int i=1;i<=n;i++){
		if(!st[i]&&i>a[u-1]){
			a[u]=i;
			st[i]=true;
			dfs(u+1);
			st[i]=false;
		}
	}
}
int main(){
	cin>>n>>m;
	dfs(1);//从第一个盒子放 
	return 0;
}
