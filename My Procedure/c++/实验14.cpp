#include<iostream>
using namespace std;
main()
{
	int a;
	int *p;
	int &c=a;//��һ��֮��  ָ����һ������  ������һ���ǳ��� 
	p=&a;
	*p=5;
	cout<<a<<endl;
	c=3;
	cout<<c;
 } 
