#include<bits/stdc++.h>
using namespace std;
//vector��һ����̬���� 
vector<int> a;//�����յ�vector 
vector<int> b(100);//����100��Ԫ�ص�vector 
vector<int> c(100,5);//����100��Ԫ�ص�vector,ÿ��Ԫ�ض���5 
int main(){
	for(int i=10;i>=1;i--){
		a.push_back(i);//��vector��β�����Ԫ�� 
	}
	a.pop_back();//��vector��β��ɾ��Ԫ�� 
	a.pop_back(); 
	//����vector��Ԫ�� 
	cout<<"��һ��Ԫ��:"<<a[0]<<" "<<a.front()<<endl;
	cout<<"���һ��Ԫ��:"<<a[a.size()-1]<<" "<<a.back()<<endl; 
	
	for(auto item:a){
		cout<<item<<" ";
	}
	cout<<endl;
	//����ı�����ʽ 
	for(int i=0;i<a.size();i++){
		cout<<a[i]<<" ";//vector����ͨ���±���������Ԫ�� 
	}
	cout<<endl;
	sort(a.begin(),a.end());//ֻ����ôд 
	for(auto i=a.begin();i!=a.end();i++){//������,�������������Ϊָ�� 
		cout<<*i<<" ";
	}
	return 0;
}

