#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;
const int N=50010;
int n;
PII cow[N];//first��ʾw[i]+s[i] second��ʾw[i] 
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		int s,w;
		cin>>w>>s;
		cow[i]={s+w,w};
	}
	sort(cow,cow+n);
	//�������,ÿͷţ�ķ���ֵһ������С��
	int sum=0,ans=-2e9;
	for(int i=0;i<n;i++){
		int s=cow[i].first-cow[i].second;
		int w=cow[i].second;
		ans=max(ans,sum-s);
		sum+=w;
	} 
	cout<<ans<<endl;
	return 0;
}

