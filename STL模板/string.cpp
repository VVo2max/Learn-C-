#include<bits/stdc++.h>
using namespace std;
int main(){
	//string���ʾ���char[]
	//1.�������ո������
	//string a;
	//cin>>a;
	//����string�ĳ���.length() / .size()  
	//int  len=a.length();
	//cout<<a<<endl;
	//cout<<len<<endl;
	
	//2.�����ո������  getline(cin,�ַ�����)
	//sting b;
	//getline(cin,b);
	//int len=b.size()
	//cout<<b<<endl<<len<<endl;
	
	//3.string�Ĺ���
//	string str1;//�յ��ַ��� 
//	string str2("123456");//�ȼ���string str2="123456" 
//	char a[100];//��string���͵�str2ת����char[]
//	strcpy(a,str2.c_str());//char[]�����в�������Ҫͨ������ 
//	cout<<a<<endl; //��string���͵�str2ת����char[] 
	
	
	//��char[]ת����string
	char b[100]="CSP2024";//���b����Ҫ�üǵñ�ע�� 
	string str(b); //���str����Ҫ�üǵñ�ע�� 
//	cout<<str<<endl;
//	
//	//4.string�Ĳ���.push_back(�ַ�) insert(�����λ��,������ַ������ַ�) 
//	str="123456789";//string�ĸ�ֱֵ��ͨ�� =  
//	str.push_back('a');//��str�ĺ���׷��һ���� 
//	cout<<str<<endl;
//	
//	str.insert(3,"abcd");
//	cout<<str<<endl;
	
	//5.string��ƴ�� + / += / .append()
//	str="12345";
//	string c="xyz";
//	str+=c;//�ȼ���str=str+c 
//	//str.append(c);
//	cout<<str<<endl;
	
	//6.string��ɾ�� .pop_back() erase(ɾ���Ŀ�ʼλ��,ɾ�����ַ�����)
//	str="1234567890";
//	str.pop_back();//ɾ�����һ���ַ�
//	cout<<str<<endl;
//	
//	str.erase(3,5);
//	cout<<str<<endl;
	
	//7.�ַ����ı��� 
//	str="123456789";
//	//for(int i=0;i<str.size();i++) cout<<str[i]<<" ";
//	for(auto ch:str){//auto���������� ��ҪC++10���ϲ����� 
//		cout<<ch<<" ";//���ֱ�����ʽ�������±� 
//	}
//	cout<<endl;
	
	//8.string���滻 replace(���滻�����,���滻���ַ��������滻���ַ���)
//	str="123456789";
//	str.replace(4,3,"xy");
//	cout<<str<<endl; 
	
	//9.string�ıȽ�(�������ıȽ�һ��) > >= < <= == !=
	
	//10.��Сдת��tolower(�ַ�)  toupper(�ַ�)      'A':65 'a':97 '0':48 
//	str="ABced123MN";
//	for(int i=0;i<str.size();i++){
//		str[i] = toupper(str[i]);
//	}
//	cout<<str<<endl;
	 
	//11.��ֵ�ַ��� �� ��ֵ ���ת��
	//��ֵ�ַ��� ת���� ��ֵ stoi(Ҫת�����ַ���) atoi(�ַ���) stoi -> str to int
//	str="1";
//	int k=stoi(str);
//	cout<<k<<endl; 

//	char g[100]="345";
//	k=atoi(g);
//	cout<<k<<endl;
	
	//��ֵת������ֵ�ַ��� to_string(����)
//	int w=3124;
//	str=to_string(w);
//	cout<<str<<endl; 
	 
	//12.string�Ĳ���find(�ַ�/�ַ���)
//	str="125456759";
//	int pos = str.find("5");//���ص�һ��5��λ��,����Ҳ�������ֵ��-1 
//	cout<<pos<<endl;
	
	//rfind(�ַ�/�ַ���) �Ӻ���ǰ�� 
//	pos=str.rfind("5");
//	cout<<pos<<endl;
	
	//13.string�Ľ�ȡ substr(��ȡ�Ŀ�ʼλ��,��ȡ�ĳ���)   substr(��ȡ�Ŀ�ʼλ��)
	str="123456789";
	string p=str.substr(2,5);
	cout<<p<<endl; 
	str.substr(3); //�ӿ�ʼ��ĩβ 
	  
	return 0;
}

