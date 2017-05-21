#include<iostream>
using namespace std;
main()
{
	int i,factor=1;
	int n,m;
	cout<<"please input two numbers"<<endl;
	cin>>n>>m;
	for(i=2/*这里不能=1，否则陷入死循环*/;i<=m,i<=n;i++)
	{
		while(m%i==0 && n%i==0)
		{
			factor=factor*i;//这里利用了积少成多的思想，利用多个小因子相乘得出最大公因子； 
			m=m/i;n=n/i;
		}
	}
	cout<<factor<<endl;
}
