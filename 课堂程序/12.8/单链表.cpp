#include<bits/stdc++.h>
using namespace std;
const int N=100010;
int head;//ͷ�ڵ� 
int e[N];//e[i]�洢�ڵ�i�Ľڵ�ֵ 
int ne[N];//ne[i]��ʾ�ڵ�i����һ���ڵ��� 
int idx;//��ǰ�ڵ���
//������������ؼ����� 
//1.��x���뵽�������ͷ�ڵ� 
void add_to_head(int x){
	e[idx]=x;
	//idx����һ������head 
	ne[idx]=head;
	//head����һ������idx 
	head=idx++;
}
//2.��x���뵽�ڵ�k�ĺ��� 
void add(int k,int x){
	e[idx]=x;
	//idx����һ������k 
	ne[idx]=ne[k];
	//k����һ������ idx 
	ne[k]=idx;
	idx++;
}
//3.ɾ���ڵ�k����Ľڵ� 
void remove(int k){
	//k����һ��������ne[ne[k]] 
	ne[k]=ne[ne[k]];
}
int main(){
	int m;
	cin>>m;
	//��ʼ�������� 
	idx=0,head=-1;//-1��ʾ������Ϊ�� 
	while(m--){
		char op;int k,x;
		cin>>op;
		if(op=='H'){
			cin>>x;
			add_to_head(x);
		}
		else if(op=='D'){
			cin>>k;
			if(k==0) head=ne[head];//ɾ��ͷ�ڵ� 
			else remove(k-1);
		}else{
			cin>>k>>x;
			add(k-1,x);
		}
	} 
	//���������� 
	for(int i=head;i!=-1;i=ne[i]){
		cout<<e[i]<<" "; 
	}
	return 0;
}

