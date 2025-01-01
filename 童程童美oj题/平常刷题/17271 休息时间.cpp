#include<bits/stdc++.h>
using namespace std;
int main(){
	int s,m,h,n;
	cin>>h>>m>>s>>n;
	s+=n;
	if(s>=60){
        m+=s/60;
        s-=60*(s/60);
    }
	if(m>=60){
        h+=m/60;
        m-=60;
    }
	cout<<h<<" "<<m<<" "<<s<<endl; 
	return 0;
}

