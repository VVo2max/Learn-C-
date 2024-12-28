#include<bits/stdc++.h>
using namespace std;
const int N=1010;
int n,a[N];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]; 
	//²åÅÅºËÐÄ Ê±¸´O(n^2) 
	for(int i=1;i<=n;i++){
		int t=a[i];
		int j=i-1;
		while(j>=1&&a[j]>=t){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=t;
	}
	for(int i=1;i<=n;i++){
		cout<<a[i];
	} 
	return 0;
}

