#include<bits/stdc++.h>
using namespace std;
stack<int> stk;
int a[114514];//出栈序列 
int n;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	int cur=1;
	//检查出栈序列 
	for(int i=1;i<=n;i++){
		//a[i]要出栈，说明a[i]及前面的车厢要先进展 
		while(cur<=a[i]){
			stk.push(cur);
			cur++;
		} 
		if(a[i]==stk.top()) stk.pop();
		else{
			cout<<"NO"<<endl;
			return 0;
		}
	}
	if(stk.empty()) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}

