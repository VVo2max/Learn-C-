#include<bits/stdc++.h>
#define can first
#define money second
using namespace std;
const int N=1010;
int n,m;
int a[N]; 
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int s;
		cin>>s;
		a[s]+=i;
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}