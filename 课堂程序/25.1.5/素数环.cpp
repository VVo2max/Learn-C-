#include<bits/stdc++.h>// 
using namespace std;
const int N=114514;
int a[N],n;
bool st[N];
bool isprime(int x){
	if(x<2) return false;
	for(int i=2;i<x;i++)
		if(x%i==0) return false;
	return true;
}
void dfs(int u){
	if(u==n&&isprime(a[0]+a[u-1])){
		for(int i=0;i<n;i++) cout<<a[i]<<" ";
		cout<<endl;
		return;
	}
	for(int i=2;i<=n;i++){
		if(!st[i]&&isprime(i+a[u-1])){
			a[u]=i;
			st[i]=true;
			dfs(u+1);
			st[i]=false;
		}
		
	}
}
int main(){
	cin>>n;
	a[0]=1;
	st[1]=true;
	dfs(1);
	return 0;
}
