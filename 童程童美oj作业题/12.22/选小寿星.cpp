#include<bits/stdc++.h>
using namespace std;
int q[114514],a[114514];
int hh,tt=-1;
int n,m,cnt=1;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		int p;
		cin>>p;
		q[++tt]=p;
		a[tt]=i;
	}
	cin>>m;
	while(hh<tt){
		if(cnt%m==0){ 
			if(q[hh]==0){
				q[hh]=1;
				q[++tt]=q[hh];
				a[tt]=a[hh];
			}
			else{
				hh++;
//				cout<<"aaaa"<<endl; 
			}
		}
		else{
			q[++tt]=q[hh];
			a[tt]=a[hh];
			hh++;
		}
		cnt++;
//		cout<<a[tt]<<" ";
	}
	cout<<a[tt];
	return 0;
}

