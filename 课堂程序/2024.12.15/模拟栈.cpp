#include<bits/stdc++.h>
using namespace std;
int stk[114514];//数字模拟栈 
int tt;//栈顶指针，永远指向栈顶元素 tt=0时表示空栈 
int main(){
	int t;
	cin>>t;
	while(t--){
		int x;
		string op;
		cin>>op;
		if(op=="push"){
			cin>>x;
			stk[++tt]=x;
		}
		else if(op=="pop"){
			tt--;
		}
		else if(op=="empty"){
			if(tt==0) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
		else if(op=="query"){
			cout<<stk[tt]<<endl;
		}
	}
	return 0;
}

