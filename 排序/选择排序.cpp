#include<bits/stdc++.h>
using namespace std;
const int N=2010;
int n,a[N];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	//ѡ����� ʱ�临�Ӷ�O(n^2) 
	for(int i=1;i<n;i++){
		int t=i;
		for(int j=i+1;j<=n;j++){
			if(a[j]<a[t]) t=j;
		}
		swap(a[i],a[t]);
	}
	for(int i=1;i<=n;i++) cout<<a[i]<<" ";
	return 0;
}

