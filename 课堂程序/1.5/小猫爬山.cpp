#include<bits/stdc++.h>// 
using namespace std;
const int N=20;
int n,w;  
int c[N];//��¼Сè������ 
int sum[N];//sum[i]��¼��i���³���ǰ������
int ans=N;//��¼���Ž� 
//bool p(int a,int b){
//	return a>b;
//}
//����ö�ٵ�uֻСè ,һ��ʹ����k���³� 
void dfs(int u,int k){
	//2.��֦(�����Լ�֦)
	if(k>=ans) return;
	if(u==n){//����Сè�����ú��ˣ��������Ž� 
		ans=k;//kһ����С��ans��ans=min(k,ans)
		return;
	}
	//���ڵ�ǰ�ĵ�uֻСè,��2����������� 
	//1.�ŵ����е��³��� 
	for(int i=0;i<k;i++){
		if(sum[i]+c[u]<=w){
			sum[i]+=c[u];
			dfs(u+1,k);//����������һֻСè 
			sum[i]-=c[u];//���� 
		}
	} 
	//2.�¿�һ�� 
	sum[k]=c[u];
	dfs(u+1,k+1);//��������һֻСè 
	sum[k]=0;
}
int main(){
	cin>>n>>w;
	for(int i=0;i<n;i++)
		cin>>c[i];
	//1.��֦1(�Ż�����˳��)
	sort(c,c+n);//sort(c,c+n,p)
	reverse(c,c+n);//���ַ�ת 
	dfs(0,0);
	cout<<ans<<endl; 
	return 0;
}         

