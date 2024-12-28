#include<bits/stdc++.h>
using namespace std;
const int N=20;
char a[N][N];//存储方案 
int n,ans;
//标记列，主对角线，次对角线 
bool col[N],gd[N],ugd[N];
//当前正在搜索第u行 
void dfs(int u){
	if(u==n){//全部皇后放置完毕 
		ans++;
		cout<<"NO."<<ans<<endl;
		for(int i=0;i<n;i++) puts(a[i]);
		return;
	}
	//枚举第u行的1到n列 
	for(int i=0;i<n;i++){
		if(!col[i]&&!gd[u-i+n]&&!ugd[u+i]){//第j列可以放置皇后 
			a[u][i]='1';
			col[i]=gd[u-i+n]=ugd[u+i]=true;
			dfs(u+1);//按照同样的方式继续下一行
			//开始回溯 1.全部皇后都放完了 2.当前行没有位置可以放皇后 
			a[u][i]='0';
			col[i]=gd[u-i+n]=ugd[u+i]=false;
		}
	}
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			a[i][j]='0';
	dfs(0);//从第一行开始搜 
	cout<<ans;
	return 0;
}

