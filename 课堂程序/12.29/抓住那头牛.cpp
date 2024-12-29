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
	//1.起点入队
	q.push({n,0});
	st[n]=true;
	//2.不断从队列中取出队首元素，然后从队首元素的2个方向扩展
	//把每个可以扩展的点入队，直到队列为空或找到终点 
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

