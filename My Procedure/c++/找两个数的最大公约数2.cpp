#include<iostream>
using namespace std;
main()
{
	int i,factor=1;
	int n,m;
	cout<<"please input two numbers"<<endl;
	cin>>n>>m;
	for(i=2/*���ﲻ��=1������������ѭ��*/;i<=m,i<=n;i++)
	{
		while(m%i==0 && n%i==0)
		{
			factor=factor*i;//���������˻��ٳɶ��˼�룬���ö��С������˵ó�������ӣ� 
			m=m/i;n=n/i;
		}
	}
	cout<<factor<<endl;
}
