#include<bits/stdc++.h>
using namespace std;
int stk[114514];
int tt;
char d[6]={'A','B','C','D','E','F'};
int main(){
	int n,m;
	cin>>n>>m;
	while(n){
		stk[++tt]=n%m;
		n/=m;
	}
	while(tt){
		if(stk[tt]>=10){
			//cout<<d[stk[tt]%m-10];
			cout<<char(stk[tt]-10+'A');
			tt--;
		}
		else{
			cout<<stk[tt];
			tt--;
		}
	}
	return 0;
}

