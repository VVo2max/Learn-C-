#include<bits/stdc++.h>
using namespace std;
const int N=100010;
int a[N];//����ģ��Ͱ 
int main(){
	int n,t;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		//��tװ��t��Ͱ 
		a[t]+=1;//a[t]++;
	}
	for(int i=0;i<N;i++){
		for(int j=0;j<a[i];j++){
			cout<<i<<" ";
		}
	}
	
	return 0;
}

