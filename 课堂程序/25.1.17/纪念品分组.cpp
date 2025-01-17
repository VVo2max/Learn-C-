#include<bits/stdc++.h>
using namespace std;
const int N=30010;
int p[N];
int w,n,ans; 
int main(){
	cin>>w>>n;
	for(int i=0;i<n;i++)cin>>p[i];
	sort(p,p+n);
	int i=0,j=n;
	while(j>i){
		if(p[i]+p[j]<=w){
			ans++;
			i++,j--;
		}else{
			ans++;
			j--;
		}
	}
	cout<<ans<<endl;
	return 0;
}
