#include<bits/stdc++.h>
using namespace std;
deque<int> dq; 
int main(){
	for(int i=100;i<=300;i+=100) dq.push_front(i);
	for(int i=400;i<=600;i+=100) dq.push_back(i);
	
	//队尾元素出队 
	dq.pop_back();
	
	//输出队列的元素个数 
	cout<<dq.size()<<endl;
	
	//输出队列的队首元素和队尾元素 
	cout<<dq.front()<<" "<<dq.back()<<endl;
	
	//从头往尾遍历双向队列 
	while(!dq.empty()){//dq.size()
		//1.先访问队首元素
		cout<<dq.front()<<" ";
		//2.队收元素出队 
		dq.pop_front(); 
	}
	return 0;
}

