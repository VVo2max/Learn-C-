#include<bits/stdc++.h>
using namespace std;
//շת�����(�������)(ŷ����ö���) 
//ԭ��:��������������� ���� ���н�С���� 
int gcd(int n,int m){
	if(m==0) return n;
	return gcd(m,n%m);
}
int main(){
	int n,m;
	cin>>n>>m; 
	cout<<gcd(n,m)<<endl;//�Լ�д�� 
	cout<<__gcd(n,m)<<endl;//ϵͳ���� 
	return 0;
}

