#include<bits/stdc++.h>
using namespace std;
const int N=110;
struct Node{
	int x,y;//��ǰ��λ�� 
	int step;//����㵽��ǰ����Ҫ�����ٲ��� 
}q[N*N];
int n,m;
int g[N][N];
bool st[N][N];
int d[4][2]={-1,0,0,1,1,0,0,-1};
int hh,tt=-1;
int ax,ay,bx,by;
bool flag;
void bfs(){
	//1.������
	q[++tt]={ax,ay,0};
	st[ax][ay]=true;
	
	//2.���ϴӶ�����ȡ������Ԫ�أ�Ȼ��Ӷ���Ԫ�ص�4��������չ
	//��ÿ��������չ�ĵ���ӣ�ֱ������Ϊ�ջ��ҵ��յ� 
	while(hh<=tt){
		Node t=q[hh];
		for(int i=0;i<4;i++){
			int a=t.x+d[i][0],b=t.y+d[i][1];
			//           û��Խ��      δ���ʹ�    ��ǰ������� 
			if(a>=1&&a<=n&&b>=1&&b<=m&&!st[a][b]&&g[a][b]==0){
				q[++tt]={a,b,t.step+1};
				st[a][b]=true;
			}
			if(a==bx&&b==by){
				flag=true;
				break;
			}
		}
		if(flag) break;
		hh++;
	} 
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>g[i][j];
	cin>>ax>>ay>>bx>>by;
	bfs();
	cout<<q[tt].step;
	return 0;
}

