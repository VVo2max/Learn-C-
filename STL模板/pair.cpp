#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;//��pair<int,int>������һ������ PII 
//pair:pair�൱�ڹ̶���2�����ԵĽṹ��,��һ��������first, �ڶ���������second 
PII pp; //pair����
PII p[110]; 
bool cmp(PII a,PII b){//��������ȡ������������ 
	if(a.first!=b.first) return a.first>b.first;//first��ͬ����first���� 
	else return a.second>b.second;//������second���� 
}
int main(){
	//��pair������ֵ 
	p[1].first=10,p[1].second=20;
	p[2]={5,5};
	p[3]=PII(8,8);
	p[4]=make_pair(10,15);
	p[5]=make_pair(5,1);
	p[6]=make_pair(8,3);
	
	for(int i=1;i<=6;i++){
		cout<<p[i].first<<" "<<p[i].second<<endl;
	}
	cout<<endl;
	//�ṹ���������򣬱���ָ��������� 
	//pair����:�Ȱ���first����,���first��ͬ������second����	
	sort(p+1,p+1+6,cmp);
	for(int i=1;i<=6;i++){
		cout<<p[i].first<<" "<<p[i].second<<endl;
	}
	return 0;
}

