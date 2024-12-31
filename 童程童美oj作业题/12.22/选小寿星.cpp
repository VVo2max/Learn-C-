#include<bits/stdc++.h>
using namespace std;
queue<int> q,p;
int n,m,cnt;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		int o;
		cin>>o;
		q.push(o);
		p.push(i);
	}
	cin>>m;
	while(!q.empty()){
		for(int i=0;i<m-1;i++){
			q.push(q.front());
			q.pop();
			p.push(p.front());
			p.pop();
		}
		if(q.front()==0){
			q.front()=1;
			q.push(q.front());
			q.pop();
			p.push(p.front());
			p.pop();
		}
		else{
			q.pop();
			p.pop(); 
		}
	}
	cout<<p.back()<<endl;
	return 0;
}
