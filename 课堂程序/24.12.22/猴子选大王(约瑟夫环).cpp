#include<bits/stdc++.h>
using namespace std;
int q[114514];
int hh,tt=-1;
int n,m,cnt=1;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		q[++tt]=i;
	}
	while(hh<tt){
		if(cnt%m==0) hh++;
		else{
			q[++tt]=q[hh];
			hh++;
		}
		cnt++;
	}
	cout<<q[tt];
	return 0;
}

