#include<bits/stdc++.h>
using namespace std;
int t[27];
string a;
int maxn=-2147483648,minn=2147483647;
bool isprime(int x){
	if(x<2) return false;
	for(int i=2;i<x/i;i++)
		if(x%i==0) return false;
	return true;
}
int main(){
	cin>>a;
	for(int i=0;i<a.length();i++){
//		cout<<a[i]<<" ";
		t[a[i]]++;
	}
		
	for(int i=0;i<a.length();i++){
//        cout<<t[a[i]]<<" ";
		maxn=max(t[a[i]],maxn);
		minn=min(t[a[i]],minn);
	}
	int sum=maxn-minn;
	if(isprime(sum)){
		cout<<"Lucky Word"<<endl<<sum;
	}
	else{
		cout<<"No Answer"<<endl<<'0';
	}
	return 0;
} 
