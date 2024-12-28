#include<bits/stdc++.h>
using namespace std;
int main(){
	//字符串char[] 和string
	//char[]
	//不包含空格的读入 cin>>数组名
	//char a[110];
//	cin>>a;
	//计算字符串的长度 
//	int len=strlen(a);
	//输出 
//	cout<<a<<endl;
//	cout<<len<<endl;
	
	//包含空格的输入cin.getline(数组名，数组长度)
//	char b[100];
//	cin.getline(b,100);
//	int len=strlen(b);
//	cout<<b<<endl<<len<<endl; 
	
	//char[]数组的相关操作(拼接 赋值 比较)
	
	//拼接 
//	char a[100]="CSP",b[100]="2024";
//	strcat(a,b);//b连接在a的后面
//	cout<<a<<endl;
	
	//赋值 
//	char c[100]="CSP",d[100]="2024";
//	strcpy(c,d);//d赋值给c 
//	cout<<c<<endl; 
	
	//比较
	char e[100]="CSP",f[100]="aaaaaa";
	int res=strcmp(e,f);//两个字符串的相对应位置按照字典序来比较 
	if(res>0) cout<<e<<endl;
	else if(res<0) cout<<f<<endl;
	else cout<<"=="<<endl;
	
	return 0;
}
