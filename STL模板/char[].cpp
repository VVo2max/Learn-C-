#include<bits/stdc++.h>
using namespace std;
int main(){
	//�ַ���char[] ��string
	//char[]
	//�������ո�Ķ��� cin>>������
	//char a[110];
//	cin>>a;
	//�����ַ����ĳ��� 
//	int len=strlen(a);
	//��� 
//	cout<<a<<endl;
//	cout<<len<<endl;
	
	//�����ո������cin.getline(�����������鳤��)
//	char b[100];
//	cin.getline(b,100);
//	int len=strlen(b);
//	cout<<b<<endl<<len<<endl; 
	
	//char[]�������ز���(ƴ�� ��ֵ �Ƚ�)
	
	//ƴ�� 
//	char a[100]="CSP",b[100]="2024";
//	strcat(a,b);//b������a�ĺ���
//	cout<<a<<endl;
	
	//��ֵ 
//	char c[100]="CSP",d[100]="2024";
//	strcpy(c,d);//d��ֵ��c 
//	cout<<c<<endl; 
	
	//�Ƚ�
	char e[100]="CSP",f[100]="aaaaaa";
	int res=strcmp(e,f);//�����ַ��������Ӧλ�ð����ֵ������Ƚ� 
	if(res>0) cout<<e<<endl;
	else if(res<0) cout<<f<<endl;
	else cout<<"=="<<endl;
	
	return 0;
}
