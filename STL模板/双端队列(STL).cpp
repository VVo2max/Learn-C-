#include<bits/stdc++.h>
using namespace std;
deque<int> dq; 
int main(){
	for(int i=100;i<=300;i+=100) dq.push_front(i);
	for(int i=400;i<=600;i+=100) dq.push_back(i);
	
	//��βԪ�س��� 
	dq.pop_back();
	
	//������е�Ԫ�ظ��� 
	cout<<dq.size()<<endl;
	
	//������еĶ���Ԫ�غͶ�βԪ�� 
	cout<<dq.front()<<" "<<dq.back()<<endl;
	
	//��ͷ��β����˫����� 
	while(!dq.empty()){//dq.size()
		//1.�ȷ��ʶ���Ԫ��
		cout<<dq.front()<<" ";
		//2.����Ԫ�س��� 
		dq.pop_front(); 
	}
	return 0;
}

