#include<bits/stdc++.h>
using namespace std;
const int N=100010;
int n,a[N]; 
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	//ð�ݺ��Ĵ���    ʱ�临�Ӷ�O(n^2)  
	for(int i=1;i<n;i++){
		bool flag=true;
		for(int j=1;j<=n-i;j++){
			if(a[j]>a[j+1]){
				flag=false
				swap(a[j],a[j+1]);
			} 
		}
		if(flag) break;
	}
	for(int i=1;i<=n;i++)
		cout<<a[i]<<" "; 
	return 0;//�����ط���0 
}

