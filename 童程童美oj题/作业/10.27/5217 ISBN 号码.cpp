#include<bits/stdc++.h>
using namespace std;
string a;
int j=1,sum;
char l;
int main(){
	cin>>a;
	for(int i=0;i<a.size()-1;i++){
		if(a[i]!='-'){
			sum+=(a[i]-'0')*j++;
		}
	}
	sum%=11;
	if(sum==10)
		l='X';
	else
		l=sum+'0';
	if(l==a[12])
		cout<<"Right";
	else{
		a[12]=l;
		cout<<a;
	}
	
} 
