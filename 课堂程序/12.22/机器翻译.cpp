#include<bits/stdc++.h>
using namespace std;
int mem[114514];
int n,m,word,ans,tt;
int main(){
	memset(mem,-1,sizeof mem);
	cin>>m>>n;
	for(int i=0;i<n;i++){
		cin>>word;
		bool flag=false;//默认内存中不存在该单词
		//1.先去内存中检查是否存在word单词 
		for(int j=0;j<m;j++){
			if(mem[j]==word){
				flag=true;
				break;
			}
		}
		//2.内存在有了，直接忽略 
		//3.内存中没有，则把该单词插入到内存中 
		if(!flag){
			ans++;
			mem[tt]=word;
			tt++;
			if(tt==m) tt=0;//循环队列 
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

