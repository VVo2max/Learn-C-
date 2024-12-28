#include<bits/stdc++.h>
using namespace std;
const int N=100010;
int a[N];//数组模拟桶 
int main(){
	int n,t;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		//把t装到t号桶 
		a[t]+=1;//a[t]++;
	}
	for(int i=0;i<N;i++){
		for(int j=0;j<a[i];j++){
			cout<<i<<" ";
		}
	}
	
	return 0;
}

