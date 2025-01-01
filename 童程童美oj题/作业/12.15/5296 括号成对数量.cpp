#include<bits/stdc++.h>
using namespace std;
char stk[1114514];
int tt,ans;
int main(){
	string n;
	bool flag=true;
	cin>>n;
	for(int i=0;i<n.length();i++){
		if(n[i]==')'){
			if(stk[tt]=='('){
				tt--;
				ans++;
			}
			else{
				flag=false;
			}
		}
		else if(n[i]==']'){
			if(stk[tt]=='['){
				 tt--;
				 ans++;
			}
			else{
				flag=false;
			}
		}
		else stk[++tt]=n[i];
		
	}
	if(tt==0&&flag){
		cout<<"YES"<<" "<<ans<<endl;
	}
	else cout<<"NO"<<endl;
	return 0;
}

