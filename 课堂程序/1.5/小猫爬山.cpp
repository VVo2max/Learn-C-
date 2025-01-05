#include<bits/stdc++.h>// 
using namespace std;
const int N=20;
int n,w;  
int c[N];//记录小猫的重量 
int sum[N];//sum[i]记录第i辆缆车当前的重量
int ans=N;//记录最优解 
//bool p(int a,int b){
//	return a>b;
//}
//正在枚举第u只小猫 ,一斤使用了k辆缆车 
void dfs(int u,int k){
	//2.剪枝(最有性剪枝)
	if(k>=ans) return;
	if(u==n){//所有小猫都安置好了，更新最优解 
		ans=k;//k一定是小于ans的ans=min(k,ans)
		return;
	}
	//对于当前的第u只小猫,有2中情况来讨论 
	//1.放到已有的缆车中 
	for(int i=0;i<k;i++){
		if(sum[i]+c[u]<=w){
			sum[i]+=c[u];
			dfs(u+1,k);//继续处理下一只小猫 
			sum[i]-=c[u];//回溯 
		}
	} 
	//2.新开一辆 
	sum[k]=c[u];
	dfs(u+1,k+1);//续处理下一只小猫 
	sum[k]=0;
}
int main(){
	cin>>n>>w;
	for(int i=0;i<n;i++)
		cin>>c[i];
	//1.剪枝1(优化搜索顺序)
	sort(c,c+n);//sort(c,c+n,p)
	reverse(c,c+n);//数字反转 
	dfs(0,0);
	cout<<ans<<endl; 
	return 0;
}         

