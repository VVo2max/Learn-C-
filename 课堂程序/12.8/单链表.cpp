#include<bits/stdc++.h>
using namespace std;
const int N=100010;
int head;//头节点 
int e[N];//e[i]存储节点i的节点值 
int ne[N];//ne[i]表示节点i的下一个节点编号 
int idx;//当前节点编号
//单链表的三个关键操作 
//1.把x插入到单链表的头节点 
void add_to_head(int x){
	e[idx]=x;
	//idx的下一个点是head 
	ne[idx]=head;
	//head的下一个点是idx 
	head=idx++;
}
//2.把x插入到节点k的后面 
void add(int k,int x){
	e[idx]=x;
	//idx的下一个点是k 
	ne[idx]=ne[k];
	//k的下一个点是 idx 
	ne[k]=idx;
	idx++;
}
//3.删除节点k后面的节点 
void remove(int k){
	//k的下一个点变成了ne[ne[k]] 
	ne[k]=ne[ne[k]];
}
int main(){
	int m;
	cin>>m;
	//初始化单链表 
	idx=0,head=-1;//-1表示单链表为空 
	while(m--){
		char op;int k,x;
		cin>>op;
		if(op=='H'){
			cin>>x;
			add_to_head(x);
		}
		else if(op=='D'){
			cin>>k;
			if(k==0) head=ne[head];//删除头节点 
			else remove(k-1);
		}else{
			cin>>k>>x;
			add(k-1,x);
		}
	} 
	//遍历单链表 
	for(int i=head;i!=-1;i=ne[i]){
		cout<<e[i]<<" "; 
	}
	return 0;
}

