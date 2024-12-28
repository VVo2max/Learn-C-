#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;//对pair<int,int>起另外一个名字 PII 
//pair:pair相当于固定有2个属性的结构体,第一个属性是first, 第二个属性是second 
PII pp; //pair变量
PII p[110]; 
bool cmp(PII a,PII b){//参数类型取决于数组类型 
	if(a.first!=b.first) return a.first>b.first;//first不同则按照first排序 
	else return a.second>b.second;//否则按照second排序 
}
int main(){
	//对pair变量赋值 
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
	//结构体数组排序，必须指明排序规则 
	//pair数组:先按照first排序,如果first相同规则按照second排序	
	sort(p+1,p+1+6,cmp);
	for(int i=1;i<=6;i++){
		cout<<p[i].first<<" "<<p[i].second<<endl;
	}
	return 0;
}

