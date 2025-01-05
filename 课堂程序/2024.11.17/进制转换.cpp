#include<bits/stdc++.h>
using namespace std;
char d[6]={'A','B','C','D','E','F'};
void jzzh(int n,int m){
	if(n==0) return;
	jzzh(n/m,m);
	if(n%m>=10) cout<<d[n%m-10];	
	else cout<<n%m;
}
int main(){
	int n,m;
	cin>>n>>m;
	jzzh(n,m);

	return 0;
}

