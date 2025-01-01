#include<bits/stdc++.h>
using namespace std;
const int N=114514;
int a[N];
int main(){
	int T;
	cin>>T;
	while(T--){
		int n,maxn=0;
		cin>>n;
		for(int i=1;i<=n;i++){
            cin>>a[i];
            maxn=max(maxn,a[i]);
        }
        bool flag=true;
		for(int i=1;i<=n;i++){
            //cout<<a[i]<<" ";
			if(maxn%a[i]!=0){
                flag=false;
            }
		}
        if(flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
		
	}
	return 0;
}
