#include<bits/stdc++.h>
using namespace std;
int mem[114514];
int n,m,word,ans,tt;
int main(){
	memset(mem,-1,sizeof mem);
	cin>>m>>n;
	for(int i=0;i<n;i++){
		cin>>word;
		bool flag=false;//Ĭ���ڴ��в����ڸõ���
		//1.��ȥ�ڴ��м���Ƿ����word���� 
		for(int j=0;j<m;j++){
			if(mem[j]==word){
				flag=true;
				break;
			}
		}
		//2.�ڴ������ˣ�ֱ�Ӻ��� 
		//3.�ڴ���û�У���Ѹõ��ʲ��뵽�ڴ��� 
		if(!flag){
			ans++;
			mem[tt]=word;
			tt++;
			if(tt==m) tt=0;//ѭ������ 
			//if(hh==m) hh=0;
		}
	}
	cout<<ans<<endl;
	return 0;
}
/*
3 7
1 2 1 5 4 4 1
*/

