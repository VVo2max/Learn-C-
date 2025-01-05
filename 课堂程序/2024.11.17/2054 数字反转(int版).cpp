#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int s=0;
	while(n){
		int g=n%10;
		s=s*10+g;
		n/=10;
	}
	cout<<s<<endl;
	
	return 0;
}

