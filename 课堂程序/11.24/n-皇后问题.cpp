#include<bits/stdc++.h>
using namespace std;
const int N=20;
char a[N][N];//�洢���� 
int n,ans;
//����У����Խ��ߣ��ζԽ��� 
bool col[N],gd[N],ugd[N];
//��ǰ����������u�� 
void dfs(int u){
	if(u==n){//ȫ���ʺ������� 
		ans++;
		cout<<"NO."<<ans<<endl;
		for(int i=0;i<n;i++) puts(a[i]);
		return;
	}
	//ö�ٵ�u�е�1��n�� 
	for(int i=0;i<n;i++){
		if(!col[i]&&!gd[u-i+n]&&!ugd[u+i]){//��j�п��Է��ûʺ� 
			a[u][i]='1';
			col[i]=gd[u-i+n]=ugd[u+i]=true;
			dfs(u+1);//����ͬ���ķ�ʽ������һ��
			//��ʼ���� 1.ȫ���ʺ󶼷����� 2.��ǰ��û��λ�ÿ��ԷŻʺ� 
			a[u][i]='0';
			col[i]=gd[u-i+n]=ugd[u+i]=false;
		}
	}
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			a[i][j]='0';
	dfs(0);//�ӵ�һ�п�ʼ�� 
	cout<<ans;
	return 0;
}

