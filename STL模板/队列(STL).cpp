#include<bits/stdc++.h>
using namespace std;
queue<int> q;//����һ���ն��� 
int main(){
	for(int i=100;i<=600;i+=100)
		q.push(i);
		
	//���׳��� 
	q.pop();
	
	//������еĳ��� 
	cout<<q.size()<<endl;
	//������ж��׺Ͷ�βԪ�� 
	cout<<q.front()<<" "<<q.back()<<endl;
	
	//�������� 
	while(!q.empty()){//q.size()
		//1.�������Ԫ�� 
		cout<<q.front()<<" ";
		//2.����Ԫ�س��� 
		q.pop(); 
	}
	
	return 0;
}

