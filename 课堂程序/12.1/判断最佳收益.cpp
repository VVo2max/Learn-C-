#include<bits/stdc++.h>
using namespace std;
const int N=40;
int g[N][N];
bool st[N];//st[i]=true��ʾ��i�����й����� 
int n;
int maxn=-1e9;
//��ǰ���ڷ����u��������֮ǰ��������t 
void dfs(int u,int t){
	//���������ˣ�����u���������Է����˭ 
	for(int i=1;i<=n;i++){
		if(!st[i]){//��i����û�й��� 
			t+=g[u][i];//�ۼӵ�u�������������i���˵����� 
			st[i]=true;//��ǵ�i�����Ѿ��й����� 
			if(u<n) dfs(u+1,t);//����ͬ���ķ�ʽ����������һ��� 
			else if(u==n) maxn=max(maxn,t);//����������� �������Ž�
			//���� 
			t-=g[u][i];
			st[i]=false;
		}
	} 
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++){
			cin>>g[i][j];
		}
	dfs(1,0);
	cout<<maxn<<endl;
	return 0;
} 
