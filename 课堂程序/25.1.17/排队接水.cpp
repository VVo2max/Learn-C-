#include<bits/stdc++.h>
using namespace std;
const int N=10010;
int c,n;
int t[N];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>t[i];
	long long ans=0;
	sort(t+1,t+n+1);
	
	for(int i=1;i<=n;i++){
		ans=ans+(n-i)*t[i];
	}
	cout<<ans<<endl;
	return 0;
}
