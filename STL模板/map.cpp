//һ����¼����һ��ӳ��
//һ����¼Ҳ��һ��pair
//һ����¼Ҳ�Ǽ�ֵ��
//map���洢��map��ÿһ�����ݾ���һ����ֵ�ԣ�Ҳ��pair  
//map��unordered_map���÷���ȫһ�� 
//map�Ǻ����, unordered_map�ǹ�ϣ��
//map������ģ������������Զ�ϵͳ��unordered_map�������
//���unordered_map��Ч�ʻ����
//һ��û������Ҫ������������ѡ��unordered_map 
#include<bits/stdc++.h>
#include<unordered_map>//C++11���ϲſ���ʹ�� 
using namespace std;
//1.����һ���ַ�����������ӳ�� 
unordered_map<string,int> mp;
int main(){
	//2.��������     1)ʹ��[]��ʽ����(���԰�mp���������飬�Ѽ�������mp���±�)     2)ʹ��insert���� 
	mp["����"]=50;
	mp["С��"]=20;
	mp["����"]=100;//���������������¼��ֱ�Ӳ��룬�������������¼����ֱ���޸� 
	 
	mp.insert({"С��",22});
	mp.insert(make_pair("С��",18));
	mp.insert({"С��",200});//���������������¼��ֱ�Ӳ��룬�������������¼����ֱ�Ӻ��� 
	 
	 
	//3.���ʺ��޸� 
	cout<<mp["����"]<<endl; 
	
	//4.�жϻ����ҵ�ָ���ļ�¼ mp.count(��)
	if(mp.count("����")) cout<<"����"<<endl;
	else cout<<"������"<<endl; 
	
	
	//5.ɾ����¼ mp.erase(��) 
	mp.erase("С��");
	
	//6.����map 
	for(auto item:mp){
		cout<<item.first<<" "<<item.second<<endl;//unordered_map��ÿһ���pair 
	}
	
	
	
	//map��unordered_map���÷���ȫһ�� 
	//map�Ǻ����, unordered_map�ǹ�ϣ��
	//map������ģ������������Զ�ϵͳ��unordered_map�������
	//���unordered_map��Ч�ʻ����
	//һ��û������Ҫ������������ѡ��unordered_map 
	return 0;
} 

//һ����¼����һ��ӳ��
//һ����¼Ҳ��һ��pair
//һ����¼Ҳ�Ǽ�ֵ��
//map���洢��map��ÿһ�����ݾ���һ����ֵ�ԣ�Ҳ��pair  
 








