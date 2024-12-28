#include<bits/stdc++.h>
using namespace std;
queue<int> q;//创建一个空队列 
int main(){
	for(int i=100;i<=600;i+=100)
		q.push(i);
		
	//队首出队 
	q.pop();
	
	//输出队列的长度 
	cout<<q.size()<<endl;
	//输出队列队首和队尾元素 
	cout<<q.front()<<" "<<q.back()<<endl;
	
	//遍历队列 
	while(!q.empty()){//q.size()
		//1.输出队首元素 
		cout<<q.front()<<" ";
		//2.队首元素出队 
		q.pop(); 
	}
	
	return 0;
}

