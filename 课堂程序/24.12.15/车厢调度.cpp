#include<bits/stdc++.h>
using namespace std;
stack<int> stk;
int a[114514];//��ջ���� 
int n;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	int cur=1;
	//����ջ���� 
	for(int i=1;i<=n;i++){
		//a[i]Ҫ��ջ��˵��a[i]��ǰ��ĳ���Ҫ�Ƚ�չ 
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

