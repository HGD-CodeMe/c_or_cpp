#include<iostream>
using namespace std;
char * day(int n)
{
	static char * name[]=
	{
		"Illeagl day",//�����Բ��ӣ� 
		"Monday",
		"Tuesday",
		"Wednesday",
		"Thursday",
		"Friday",
		"Staurday",
		"Sunday"
	};
	return(n<1||n>7)?name[0]:name[n];//�ڴ˴�ͨ����n+1��ʵ�� 
}
main()
{
	int i;
	cout<<"input Day No:"<<endl;
	cin>>i;
	if(i<0)
	{
		cout<<"error";
	}
	cout<<"Day No"<<i<<"****"<<day(i)<<endl;
}
