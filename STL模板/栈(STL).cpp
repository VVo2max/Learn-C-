#include<bits/stdc++.h>
using namespace std;
stack<int> stk;
int main(){
	//���ܴӿյ������з��������Ԫ�أ�����ᱨRE���� 
	//cout<<(!stk.empty()&&stk.top())<<endl;
	stk.push(100);
	stk.push(200);
	stk.push(300);
	stk.push(400);
	stk.push(500);
	
	//��ջ 
	stk.pop();
	
	//��ȡջ��Ԫ�ظ��� 
	cout<<stk.size()<<endl;
	//��ȡջ��Ԫ�� 
	cout<<stk.top()<<endl;
	
	while(!stk.empty()){//while(stk.size())Ҳ�� 
		cout<<stk.top()<<endl;
		stk.pop();
	}
	return 0;
}

