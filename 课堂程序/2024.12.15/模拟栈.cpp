#include<bits/stdc++.h>
using namespace std;
int stk[114514];//����ģ��ջ 
int tt;//ջ��ָ�룬��Զָ��ջ��Ԫ�� tt=0ʱ��ʾ��ջ 
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

