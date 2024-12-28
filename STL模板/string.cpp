#include<bits/stdc++.h>
using namespace std;
int main(){
	//string本质就是char[]
	//1.不包含空格的输入
	//string a;
	//cin>>a;
	//计算string的长度.length() / .size()  
	//int  len=a.length();
	//cout<<a<<endl;
	//cout<<len<<endl;
	
	//2.包含空格的输入  getline(cin,字符串名)
	//sting b;
	//getline(cin,b);
	//int len=b.size()
	//cout<<b<<endl<<len<<endl;
	
	//3.string的构造
//	string str1;//空的字符串 
//	string str2("123456");//等价于string str2="123456" 
//	char a[100];//把string类型的str2转换成char[]
//	strcpy(a,str2.c_str());//char[]的所有操作都需要通过函数 
//	cout<<a<<endl; //把string类型的str2转换成char[] 
	
	
	//把char[]转换成string
	char b[100]="CSP2024";//这个b后面要用记得别注释 
	string str(b); //这个str后面要用记得别注释 
//	cout<<str<<endl;
//	
//	//4.string的插入.push_back(字符) insert(插入的位置,插入的字符串或字符) 
//	str="123456789";//string的赋值直接通过 =  
//	str.push_back('a');//在str的后面追加一个字 
//	cout<<str<<endl;
//	
//	str.insert(3,"abcd");
//	cout<<str<<endl;
	
	//5.string的拼接 + / += / .append()
//	str="12345";
//	string c="xyz";
//	str+=c;//等价于str=str+c 
//	//str.append(c);
//	cout<<str<<endl;
	
	//6.string的删除 .pop_back() erase(删除的开始位置,删除的字符个数)
//	str="1234567890";
//	str.pop_back();//删除最后一个字符
//	cout<<str<<endl;
//	
//	str.erase(3,5);
//	cout<<str<<endl;
	
	//7.字符串的遍历 
//	str="123456789";
//	//for(int i=0;i<str.size();i++) cout<<str[i]<<" ";
//	for(auto ch:str){//auto是万能类型 需要C++10以上才能用 
//		cout<<ch<<" ";//这种遍历方式隐藏了下标 
//	}
//	cout<<endl;
	
	//8.string的替换 replace(被替换的起点,被替换的字符个数，替换的字符串)
//	str="123456789";
//	str.replace(4,3,"xy");
//	cout<<str<<endl; 
	
	//9.string的比较(和整数的比较一样) > >= < <= == !=
	
	//10.大小写转换tolower(字符)  toupper(字符)      'A':65 'a':97 '0':48 
//	str="ABced123MN";
//	for(int i=0;i<str.size();i++){
//		str[i] = toupper(str[i]);
//	}
//	cout<<str<<endl;
	 
	//11.数值字符串 与 数值 间的转换
	//数值字符串 转换成 数值 stoi(要转换的字符串) atoi(字符串) stoi -> str to int
//	str="1";
//	int k=stoi(str);
//	cout<<k<<endl; 

//	char g[100]="345";
//	k=atoi(g);
//	cout<<k<<endl;
	
	//数值转换成数值字符串 to_string(整数)
//	int w=3124;
//	str=to_string(w);
//	cout<<str<<endl; 
	 
	//12.string的查找find(字符/字符串)
//	str="125456759";
//	int pos = str.find("5");//返回第一个5的位置,如果找不到返回值是-1 
//	cout<<pos<<endl;
	
	//rfind(字符/字符串) 从后往前找 
//	pos=str.rfind("5");
//	cout<<pos<<endl;
	
	//13.string的截取 substr(截取的开始位置,截取的长度)   substr(截取的开始位置)
	str="123456789";
	string p=str.substr(2,5);
	cout<<p<<endl; 
	str.substr(3); //从开始到末尾 
	  
	return 0;
}

