#include<bits/stdc++.h>
using namespace std;
float f(float x,float n){
	if(n==1){
		return 1+x;
	}
	return sqrt(n+f(x,n-1));
	
}
int main(){
	float x,n;
	cin>>x>>n;
	cout<<round(f(x,n)*100)/100;
	return 0;
}
