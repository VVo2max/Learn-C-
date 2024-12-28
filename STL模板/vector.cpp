#include<bits/stdc++.h>
using namespace std;
//vector是一个动态数组 
vector<int> a;//创建空的vector 
vector<int> b(100);//创建100个元素的vector 
vector<int> c(100,5);//创建100个元素的vector,每个元素都是5 
int main(){
	for(int i=10;i>=1;i--){
		a.push_back(i);//在vector的尾部添加元素 
	}
	a.pop_back();//在vector的尾部删除元素 
	a.pop_back(); 
	//访问vector的元素 
	cout<<"第一个元素:"<<a[0]<<" "<<a.front()<<endl;
	cout<<"最后一个元素:"<<a[a.size()-1]<<" "<<a.back()<<endl; 
	
	for(auto item:a){
		cout<<item<<" ";
	}
	cout<<endl;
	//最常见的遍历方式 
	for(int i=0;i<a.size();i++){
		cout<<a[i]<<" ";//vector可以通过下表访问里面的元素 
	}
	cout<<endl;
	sort(a.begin(),a.end());//只能这么写 
	for(auto i=a.begin();i!=a.end();i++){//迭代器,迭代器可以理解为指针 
		cout<<*i<<" ";
	}
	return 0;
}

