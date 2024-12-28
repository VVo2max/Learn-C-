#include<bits/stdc++.h>
using namespace std;
string a,b;
int main(){
	cin>>a;
	if(a=="0"){
		cout<<"0";
		return 0;
	}
	int len=a.length();
	int k=len-1;
	while(a[k]=='0') a.pop_back(),k--;
	if(a[0]=='-'){
		b=a.substr(1);
		reverse(b.begin(),b.end());
		b="-"+b;
	}
	else{
		b=a.substr(0);
		reverse(b.begin(),b.end());
	}
	
	cout<<b;
	return 0;
}
