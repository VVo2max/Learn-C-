#include<bits/stdc++.h>
using namespace std;
const int N=10;
int a[N],n;//a[N]ģ����� 
bool st[N];//st[i]=true��ʾ����i��ʹ�ù�
//��ǰ�����ڵ�u������ 
void dfs(int u){
	if(u==n+1){//˵��ǰ���n���������� 
		//������� 
		for(int i=1;i<=n;i++) cout<<a[i]<<" ";
		cout<<endl;
		return;
	}
	//ö��1��n,���ĸ������Էŵ���u������ 
	for(int i=1;i<=n;i++){
		if(!st[i]){//����iû�б��ù� 
			a[u]=i;//������iװ����u���������� 
			st[i]=true;//����i���ϱ�� 
			dfs(u+1);//ͬ���Ĳ�����������һ������
			//��ʼ���� 1.���ӷ����� 2.û�������ܷ���  
			st[i]=false;
			//a[u]=0;���Բ���
		}
	}
}
int main(){
	cin>>n;
	dfs(1);//�ӵ�һ�����ӷ� 
	return 0;
}
