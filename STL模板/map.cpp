//一条记录就是一个映射
//一条记录也是一个pair
//一条记录也是键值对
//map来存储，map的每一条数据就是一个键值对，也是pair  
//map和unordered_map的用法完全一样 
//map是红黑树, unordered_map是哈希表
//map是有序的，里面内置了自动系统，unordered_map是无序的
//因此unordered_map的效率会更好
//一边没有排序要求的情况，优先选择unordered_map 
#include<bits/stdc++.h>
#include<unordered_map>//C++11以上才可以使用 
using namespace std;
//1.创建一个字符串到整数的映射 
unordered_map<string,int> mp;
int main(){
	//2.插入数据     1)使用[]方式插入(可以把mp开成是数组，把键看成是mp的下标)     2)使用insert插入 
	mp["老王"]=50;
	mp["小李"]=20;
	mp["老王"]=100;//如果不存在这条记录则直接插入，如果存在这条记录，会直接修改 
	 
	mp.insert({"小明",22});
	mp.insert(make_pair("小亮",18));
	mp.insert({"小明",200});//如果不存在这条记录则直接插入，如果存在这条记录，会直接忽略 
	 
	 
	//3.访问和修改 
	cout<<mp["老王"]<<endl; 
	
	//4.判断或者找到指定的记录 mp.count(键)
	if(mp.count("老王")) cout<<"存在"<<endl;
	else cout<<"不存在"<<endl; 
	
	
	//5.删除记录 mp.erase(键) 
	mp.erase("小亮");
	
	//6.便利map 
	for(auto item:mp){
		cout<<item.first<<" "<<item.second<<endl;//unordered_map的每一项都是pair 
	}
	
	
	
	//map和unordered_map的用法完全一样 
	//map是红黑树, unordered_map是哈希表
	//map是有序的，里面内置了自动系统，unordered_map是无序的
	//因此unordered_map的效率会更好
	//一边没有排序要求的情况，优先选择unordered_map 
	return 0;
} 

//一条记录就是一个映射
//一条记录也是一个pair
//一条记录也是键值对
//map来存储，map的每一条数据就是一个键值对，也是pair  
 








