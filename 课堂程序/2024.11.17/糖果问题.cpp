#include<bits/stdc++.h>
using namespace std;
//����m��ͬ�����ǹ�����n��ͬ�������ӵķ����� 
int f(int m,int n){
	if(m==0) return 1;
	if(n==1) return 1;
	if(m<n) return f(m,m);
	//�п����� + �޿����� 
	return f(m,n-1)+f(m-n,n);
	
}
int main(){
	int n,m;
	cin>>m>>n;
	cout<<f(m,n)<<endl;
	return 0;
}
