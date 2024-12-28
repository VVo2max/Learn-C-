#include<bits/stdc++.h>
using namespace std;
deque<string> dq;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		string name;
		cin>>x>>name;
		if(x==0) dq.push_front(name);
		else dq.push_back(name);
	}
	while(!dq.empty()){
		cout<<dq.front()<<endl;
		dq.pop_front();
	}
	return 0;
}
/*
10
0 LZZ
0 HSY
0 TSW
1 LHS
1 WKA
0 LWJ
1 HT
0 ZZB
1 DYL
0 ZJX
*/
/*
ZJX
ZZB
LWJ
TSW
HSY
LZZ
LHS
WKA
HT
DYL
*/


