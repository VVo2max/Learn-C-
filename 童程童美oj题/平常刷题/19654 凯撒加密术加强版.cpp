#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin>>a;
	for(int i=0;i<a.length();i++){
		char b=a[i]+4;
		if(int(b)>122){
			b=b-'z'+'a'-1;
		}
		cout<<b;
	}
	return 0;
}

