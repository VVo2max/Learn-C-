#include<bits/stdc++.h>
using namespace std;
/*
1.�����Լ������Լ�
2.��������໥���� 
*/
long long age(long long n){//���ص�n��ѧ�������� 
	if(n==1) return 10;
	return age(n-1)+2;
}
int main(){
	long long n;
	cin>>n;
	cout<<age(n)<<endl;	
	return 0; 
}
