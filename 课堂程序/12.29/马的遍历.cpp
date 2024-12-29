#include<bits/stdc++.h>
using namespace std;
const int N=410;
int d[8][2]={-2,1,-1,2,1,2,2,1,2,-1,1,-2,-1,-2,-2,-1};
struct Node{
	int x,y;
	int step;
};
queue<Node> q;
int n,m;
int ax,ay;
int g[N][N];
bool st[N][N];
void bfs(){
	//1.������
	q.push({ax,ay,0});
	st[ax][ay]=true;
	g[ax][ay]=0;
	//2.���ϴӶ�����ȡ������Ԫ�أ�Ȼ��Ӷ���Ԫ�ص�4��������չ
	//��ÿ��������չ�ĵ���ӣ�ֱ������Ϊ�ջ��ҵ��յ� 
	while(!q.empty()){ 
		Node t=q.front();
		q.pop();
		for(int i=0;i<8;i++){
			int a=t.x+d[i][0],b=t.y+d[i][1];
			//           û��Խ��      δ���ʹ�    ��ǰ������� 
			if(a>=1&&a<=n&&b>=1&&b<=m&&!st[a][b]&&g[a][b]==-1){
				q.push({a,b,t.step+1});
				g[a][b]=t.step+1;
				st[a][b]=true;
			}
		}
	}
}
int main(){
	cin>>n>>m>>ax>>ay;
	memset(g,-1,sizeof g);
	bfs();
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)
			cout<<g[i][j]<<" ";
		cout<<endl;
	}
		
	return 0;
}

