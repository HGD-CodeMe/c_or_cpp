#include<iostream>
using namespace std;
main()
{
	int i;
	cout<<"请输入日期"<<endl;
	cin>>i;
	switch(i/11)
	{
		case 0:cout<<"属于上旬";break;
		case 1:cout<<"属于中旬";break;
		case 2:cout<<"属于下旬";break;
		default:cout<<"date error";break; 
	}
}
