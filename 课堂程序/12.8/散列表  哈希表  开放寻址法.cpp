#include<bits/stdc++.h>
using namespace std;
const int N=100003,null=0x3f3f3f3f;//null表示空 
int h[N],e[N],ne[N],idx;
//如果x在哈希表中存在，返回所在哈希表的位置 
//如果x在哈希表中不存在，返回应插入的位置 
int find(int x){
	int k=(x%N+N)%N;
	while(h[k]!=null&&h[k]!=x){//当前位置已经存储数了 
		k++;
		if(k==N) k=0;
	}
	return k;
} 
int main(){
	int n;
	cin>>n;
	memset(h,0x3f,sizeof h);
	while(n--){
		char op;int x;
		cin>>op>>x;
		if(op=='I') h[find(x)]=x;
		else if(h[find(x)]==null) cout<<"No"<<endl;
		else  cout<<"Yes"<<endl;
	}
	return 0;
}

