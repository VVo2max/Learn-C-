#include<bits/stdc++.h>
using namespace std;
const int N=10;
char g[N][N];
bool row[N],col[N],gd[N*2],ugd[N*2];
int n,ans;
//��ǰ���ڵ�λ����(x,y),�Ѿ�������s���ʺ� 
void dfs(int x,int y,int s){
	if(s>n)return;//���̻�û���꣬���ûʺ�������Ѿ�������n�����Ϸ� 
	if(y==n) x++,y=0;//������һ�еص�һ��λ�ü������� 
	if(x==n){//���̷����� 
		if(s==n){//�պ÷���n���ʺ� 
			ans++;
			cout<<"NO."<<ans<<endl;
			for(int i=0;i<n;i++) puts(g[i]);//puts()������Զ����� 
		}
		return; 
	}
	g[x][y]='0';
	dfs(x,y+1,s);
	if(!row[x]&&!col[y]&&!gd[x-y+n]&&!ugd[x+y]){
		g[x][y]='1';
		row[x]=col[y]=gd[x-y+n]=ugd[x+y]=true;
		dfs(x,y+1,s+1);
		g[x][y]='0';
		row[x]=col[y]=gd[x-y+n]=ugd[x+y]=false;
	}
}
int main(){
	cin>>n;
	dfs(0,0,0);//�����Ͻǿ�ʼ������0���ʺ� 
	cout<<ans<<endl;
	return 0;
}

