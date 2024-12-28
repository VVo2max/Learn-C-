#include<bits/stdc++.h>
using namespace std;
//辗转相除法(最大公因数)(欧几里得定理) 
//原理:两个数的最大公因数 等于 其中较小的数 
int gcd(int n,int m){
	if(m==0) return n;
	return gcd(m,n%m);
}
int main(){
	int n,m;
	cin>>n>>m; 
	cout<<gcd(n,m)<<endl;//自己写的 
	cout<<__gcd(n,m)<<endl;//系统函数 
	return 0;
}

