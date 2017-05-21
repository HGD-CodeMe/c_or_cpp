#include<iostream>
using namespace std;
main()
{
	int a;
	int *p;
	int &c=a;//不一样之处  指针是一个变量  引用是一个是常量 
	p=&a;
	*p=5;
	cout<<a<<endl;
	c=3;
	cout<<c;
 } 
