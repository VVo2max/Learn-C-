#include<bits/stdc++.h>
using namespace std;
const int N=100;
int d[8][2]={-2,1,-1,2,1,2,2,1,2,-1,1,-2,-1,-2,-2,-1};
int n,m,ax,ay,ans;
bool st[N][N];
//��ǰ����λ����(x,y),�Ѿ�����cnt����(������ǰ��)
void dfs(int x,int y,int cnt){
	if(cnt==n*m){
		ans++;
		return;
	}
	st[x][y]=true;
	//����Χ�˸���������չ 
	for(int i=0;i<8;i++){
		int a=x+d[i][0],b=y+d[i][1];
		if(a<0||a>=n||b<0||b>=m) continue;
		if(st[a][b]) continue;
		dfs(a,b,cnt+1); 
	}
	st[x][y]=false;
}
int main(){
	int T;
	cin>>T;
	while(T--){
		memset(st,false,sizeof st);
		ans=0;
		cin>>n>>m>>ax>>ay;
		dfs(ax,ay,1);
		cout<<ans<<endl;
	}
	return 0;
}
