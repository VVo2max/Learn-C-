#include<bits/stdc++.h>
using namespace std;
stack<char> stk;
int main(){
	string n;
	bool flag=true;
	cin>>n;
	for(int i=0;i<n.length();i++){
		if(n[i]==')'){
			if(!stk.empty()&&stk.top()=='(') stk.pop();
			else{
				flag=false;
			}
		}
		else if(n[i]==']'){
			if(!stk.empty()&&stk.top()=='[') stk.pop();
			else{
				flag=false;
			}
		}
		if(n[i]=='(')stk.push(n[i]);
		else if(n[i]=='['){
			if(!stk.empty()&&stk.top()=='(') flag=false;
			else stk.push(n[i]);
		}
		
	}
	if(stk.empty()&&flag) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}

