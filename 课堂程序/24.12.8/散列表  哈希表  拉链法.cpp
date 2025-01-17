#include<bits/stdc++.h>
using namespace std;
const int N=100003;
int h[N],e[N],ne[N],idx;//分别表示哈希表 节点值 下一个节点 当前结点
//插入x到集合中 
void insert(int x){//类似单链表中把x插入到头节点h[k]相当于head 
	int k=(x%N+N)%N;
	e[idx]=x,ne[idx]=h[k],h[k]=idx,idx++;
}
bool find(int x){
	int k=(x%N+N)%N;
	for(int i=h[k];i!=-1;i=ne[i]){
		if(e[i]==x) return true;
	}
	return false; 
}
int main(){
	int n;
	memset(h,-1,sizeof h);//-1表示空节点 
	cin>>n;
	while(n--){
		char op;int x;
		cin>>op>>x;
		if(op=='I') insert(x);
		else if(find(x)) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	} 

	return 0;
}
/*
5
I 1
I 2
Q 2
Q 5
*/
