#include<bits/stdc++.h>
using namespace std;
unordered_map<string,int> s;
queue<string> q;
int d[4][2]={-1,0,0,1,1,0,0,-1};
string en="123804765";
int bfs(string state){//state��ʾ��ʼ״̬ 
	q.push(state);
	s[state]=0;
	while(!q.empty()){
		string t=q.front();
		q.pop();
		if(t==en) return s[t];
		int dist=s[t];//dist��ʾ��ʼ״̬��״̬t��Ҫ�����ٲ��� 
		int k=t.find('0');//�ҵ��ַ����пո��λ�� 
		int x=k/3,y=k%3;//�õ��ո��ڶ�ά��λ�� 
		for(int i=0;i<4;i++){
			int a=x+d[i][0],b=y+d[i][1];
			if(a>=0&&a<3&&b>=0&&b<3){
				swap(t[k],t[a*3+b]);//�������t
				if(!s.count(t)){
					q.push(t);
					s[t]=dist+1; 
				}
				swap(t[k],t[a*3+b]); 
			}
		} 
	}
	
}
int main(){
	string state;
	cin>>state;
	cout<<bfs(state)<<endl;
	return 0;
}

