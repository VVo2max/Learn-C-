#include<bits/stdc++.h>
using namespace std;
const int N=110;
struct Node{
	int x,y;//��ǰ��λ�� 
	int step;//����㵽��ǰ����Ҫ�����ٲ��� 
};

int n,m;
int g[N][N];
bool st[N][N];
int d[12][2]={{2, 1}, {1, 2}, {-1, 2}, {-2, 1},{-2, -1}, {-1, -2}, {1, -2}, {2, -1},{2, 2}, {-2, -2}, {2, -2}, {-2, 2}};
int ax,ay,bx,by;
bool flag;
int bfs(int x,int y){
	queue<Node> q;
	//1.������
	q.push({x,y,0});
	st[x][y]=true;
	//2.���ϴӶ�����ȡ������Ԫ�أ�Ȼ��Ӷ���Ԫ�ص�4��������չ
	//��ÿ��������չ�ĵ���ӣ�ֱ������Ϊ�ջ��ҵ��յ� 
	while(!q.empty()){
		Node t=q.front();
		for(int i=0;i<12;i++){
			int a=t.x+d[i][0],b=t.y+d[i][1];
			//           û��Խ��      δ���ʹ�    ��ǰ������� 
			if(a>=1&&a<=100&&b>=1&&b<=100&&!st[a][b]){
				q.push({a,b,t.step+1});
				st[a][b]=true;
			}
			if(a==1&&b==1){
				return q.back().step;
			}
		}
		q.pop();
	} 
}
int main(){
	cin>>ax>>ay>>bx>>by;
	int l=bfs(ax,ay);
	cout<<l<<endl;
	memset(st,false,sizeof st);
	int ll=bfs(bx,by);
	cout<<ll<<endl;
	return 0;
}

