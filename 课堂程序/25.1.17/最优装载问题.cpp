#include<bits/stdc++.h>
using namespace std;
const int N=10010;
int c,n;
int w[N];
int main(){
	cin>>c>>n;
	for(int i=0;i<n;i++) cin>>w[i];
	int ans=0//��¼װ����ӵ�ƻ������
	int weight=0;//��¼��װ����ӵ�ƻ������ 
	sort(w,w+n);
	//̰��ѡ��ÿ�ζ��������ƻ��������װ������ƻ�� 
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
