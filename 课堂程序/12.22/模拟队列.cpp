#include<bits/stdc++.h>
using namespace std;
const int N=100010;
int q[N];//����ģ����� 
int hh,tt=-1;//���׺Ͷ�βָ�� 
int main(){
	int n; 
	cin>>n;
	while(n--){
		string op;
		int x;
		cin>>op;
		if(op=="push"){
			cin>>x;
			q[++tt]=x;
		}
		else if(op=="pop") hh++;
		else if(op=="empty"){
			if(hh>tt) cout<<"YES"<<endl;
			else cout<<"NO"<<endl; 
		}
		else{
			cout<<q[hh]<<endl;
		}
	}
	
	return 0;
} 
