#include<bits/stdc++.h>
using namespace std;
const int N=114514;
int a[N];
int n,cnt;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			int m=a[i]+a[j];
			for(int k=1;k<=sqrt(m);k++)
				if(k*k==m)
					cnt++; 
		}
	}
	cout<<cnt<<endl;
} 
