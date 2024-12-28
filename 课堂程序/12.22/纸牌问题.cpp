#include<bits/stdc++.h>
using namespace std;
int q[114514];
int hh,tt=-1;
int n;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		q[++tt]=i;
	}
	while(hh<=tt){
		cout<<q[hh]<<" ";
		hh++;
		q[++tt]=q[hh];
		hh++;
	}
	return 0;
}

