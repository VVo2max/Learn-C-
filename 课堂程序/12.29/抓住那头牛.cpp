#include<bits/stdc++.h>
using namespace std;
const int N=100010;
int n,k;
int g[N];
bool st[N];
bool flag;
struct Node{
	int x;
	int step;
};
queue<Node> q;
bool check(int x){
	return x>=0&&x<N&&!st[x];
}
int bfs(){
	//1.������
	q.push({n,0});
	st[n]=true;
	//2.���ϴӶ�����ȡ������Ԫ�أ�Ȼ��Ӷ���Ԫ�ص�2��������չ
	//��ÿ��������չ�ĵ���ӣ�ֱ������Ϊ�ջ��ҵ��յ� 
	while(!q.empty()){
		Node t=q.front();
		q.pop();
		int x=t.x,d=t.step;
		if(x==k) return d;
		if(check(x+1)){
			q.push({x+1,d+1});
			st[x+1]=true; 
		}
		if(check(x-1)){
			q.push({x-1,d+1});
			st[x-1]=true; 
		}
		if(check(x*2)){
			q.push({x*2,d+1});
			st[x*2]=true; 
		}
	}
}
int main(){
	cin>>n>>k;
	cout<<bfs()<<endl;
	return 0;
}

