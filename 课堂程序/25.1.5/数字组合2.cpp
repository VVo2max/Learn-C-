#include<bits/stdc++.h>//1 
using namespace std;
const int N=22;
int n,r;
bool st[N];
vector<int> path;//vectorģ�����
//��ǰ��������u�����������֣������ķ�Χ�Ǵ�start��ʼ 
void dfs(int u,int start){
	if(u==r){
		for(auto k:path) cout<<k<<" ";
		cout<<endl;
		return;
	}
	//��������u������������
	for(int i=start;i<=n;i++){
		if(!st[i]){
			path.push_back(i);//������i�ŵ���������
			st[i]=true;
			dfs(u+1,i+1);
			path.pop_back();
			st[i]=false;
		}
	} 
} 
int main(){
	cin>>n>>r;
	dfs(0,1);
	
	return 0;
}

