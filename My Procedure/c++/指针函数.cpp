#include<iostream>
using namespace std;
char * day(int n)
{
	static char * name[]=
	{
		"Illeagl day",//这句可以不加？ 
		"Monday",
		"Tuesday",
		"Wednesday",
		"Thursday",
		"Friday",
		"Staurday",
		"Sunday"
	};
	return(n<1||n>7)?name[0]:name[n];//在此处通过【n+1】实现 
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
