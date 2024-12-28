#include<bits/stdc++.h>
using namespace std;
const int N=10;
int a[N],n;//a[N]模拟盒子 
bool st[N];//st[i]=true表示数字i被使用过
//当前正放在第u个盒子 
void dfs(int u){
	if(u==n+1){//说明前面的n个盒子满了 
		//输出排列 
		for(int i=1;i<=n;i++) cout<<a[i]<<" ";
		cout<<endl;
		return;
	}
	//枚举1到n,看哪个数可以放到第u个盒子 
	for(int i=1;i<=n;i++){
		if(!st[i]){//数字i没有被用过 
			a[u]=i;//把数字i装到第u个盒子里面 
			st[i]=true;//数字i打上标记 
			dfs(u+1);//同样的操作，继续放一个盒子
			//开始回溯 1.盒子放满了 2.没有数字能放了  
			st[i]=false;
			//a[u]=0;可以不加
		}
	}
}
int main(){
	cin>>n;
	dfs(1);//从第一个盒子放 
	return 0;
}
