#include<bits/stdc++.h>
using namespace std;
/*
1.函数自己调用自己
2.多个函数相互调用 
*/
long long age(long long n){//返回第n个学生的年龄 
	if(n==1) return 10;
	return age(n-1)+2;
}
int main(){
	long long n;
	cin>>n;
	cout<<age(n)<<endl;	
	return 0; 
}
