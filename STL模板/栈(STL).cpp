#include<bits/stdc++.h>
using namespace std;
stack<int> stk;
int main(){
	//不能从空的容器中访问里面的元素，否则会报RE错误 
	//cout<<(!stk.empty()&&stk.top())<<endl;
	stk.push(100);
	stk.push(200);
	stk.push(300);
	stk.push(400);
	stk.push(500);
	
	//出栈 
	stk.pop();
	
	//获取栈的元素个数 
	cout<<stk.size()<<endl;
	//获取栈顶元素 
	cout<<stk.top()<<endl;
	
	while(!stk.empty()){//while(stk.size())也行 
		cout<<stk.top()<<endl;
		stk.pop();
	}
	return 0;
}

