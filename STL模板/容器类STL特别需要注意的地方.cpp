#include<bits/stdc++.h>
using namespace std;
vector<int> a;//空的vector 
stack<int> stk;
int main(){
	//所有的容器STL都需要避免:当容器STL为空时,不允许访问容器里的元素 
	//cout<<a[0]<<endl;
	
//	cout<<(stk.size&&stk.top())<<endl;
	vector<int> b(100,10);
	cout<<b[92]<<endl;
	return 0;
}

