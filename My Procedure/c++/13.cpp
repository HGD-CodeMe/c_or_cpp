#include<iostream>\\输入十个数求其正数的个数 
using namespace std;
main()
{
	int x[10],a,b=0;
	cout<<"please input 10 number"<<endl;
	for(a=0;a<=9;a++)
	cin>>x[a];
	for(a=0;a<=9;a++)\*为什么定义a=1结果会不一样 *\ 
	if(x[a]>0) 
	b++;
	cout<<b<<endl;
}
