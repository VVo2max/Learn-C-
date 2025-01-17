#include<bits/stdc++.h>//1 
using namespace std;
const int N=22;
int n,r;
bool st[N];
vector<int> path;//vector模拟盒子
//当前正在往第u个盒子填数字，填数的范围是从start开始 
void dfs(int u,int start){
	if(u==r){
		for(auto k:path) cout<<k<<" ";
		cout<<endl;
		return;
	}
	//尝试往第u个盒子填数字
	for(int i=start;i<=n;i++){
		if(!st[i]){
			path.push_back(i);//把数字i放到盒子里面
			st[i]=true;
			dfs(u+1,i+1);
			path.pop_back();
			st[i]=false;
		}
	} 
} 
int main(){
	cin>>n>>r;
	dfs(0,1);
	
	return 0;
}

