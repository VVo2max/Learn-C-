#include<bits/stdc++.h>
using namespace std;
const int N=100003,null=0x3f3f3f3f;//null��ʾ�� 
int h[N],e[N],ne[N],idx;
//���x�ڹ�ϣ���д��ڣ��������ڹ�ϣ���λ�� 
//���x�ڹ�ϣ���в����ڣ�����Ӧ�����λ�� 
int find(int x){
	int k=(x%N+N)%N;
	while(h[k]!=null&&h[k]!=x){//��ǰλ���Ѿ��洢���� 
		k++;
		if(k==N) k=0;
	}
	return k;
} 
int main(){
	int n;
	cin>>n;
	memset(h,0x3f,sizeof h);
	while(n--){
		char op;int x;
		cin>>op>>x;
		if(op=='I') h[find(x)]=x;
		else if(h[find(x)]==null) cout<<"No"<<endl;
		else  cout<<"Yes"<<endl;
	}
	return 0;
}

