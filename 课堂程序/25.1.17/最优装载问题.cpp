#include<bits/stdc++.h>
using namespace std;
const int N=10010;
int c,n;
int w[N];
int main(){
	cin>>c>>n;
	for(int i=0;i<n;i++) cin>>w[i];
	int ans=0//记录装入袋子的苹果数量
	int weight=0;//记录已装入袋子的苹果重量 
	sort(w,w+n);
	//贪心选择：每次都挑最轻的苹果，可以装入最多的苹果 
	for(int i=0;i<n;i++){
		if(weight+w[i]<=0){
			weight+=w[i];
			ans++;	
		}else{
			break;
		}
	}
	cout<<ans<<endl;
	return 0;
}
