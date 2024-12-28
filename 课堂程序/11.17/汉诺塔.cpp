#include<bits/stdc++.h>
using namespace std;
void hnt (int n,char x,char y,char z){
	if(n==1){
		cout<<x<<"->"<<z<<endl;
		return;
	}
	hnt(n-1,x,y,z);
	cout<<x<<"->"<<z<<endl;
	hnt(n-1,y,z,x);
	
	
}
int main(){
	int n;
	cin>>n;
	hnt(n,'X','Z','Y');
	return 0;
}

