#include<bits/stdc++.h>
using namespace std;
char q[114514];
int hh,tt=-1;
int n;
int main(){
    string n;
	cin>>n;
	for(int i=0;i<n.length();i++){
		q[++tt]=n[i];
	}
	while(hh<=tt){
		cout<<q[hh];
		hh++;
		q[++tt]=q[hh];
		hh++;
	}
	return 0;
}

