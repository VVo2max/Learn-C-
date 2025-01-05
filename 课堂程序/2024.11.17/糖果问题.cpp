#include<bits/stdc++.h>
using namespace std;
//返回m个同样的糖果放在n个同样的盘子的方法数 
int f(int m,int n){
	if(m==0) return 1;
	if(n==1) return 1;
	if(m<n) return f(m,m);
	//有空盘子 + 无空盘子 
	return f(m,n-1)+f(m-n,n);
	
}
int main(){
	int n,m;
	cin>>m>>n;
	cout<<f(m,n)<<endl;
	return 0;
}
