//�������������Լ
#include<iostream>//����㷨̫�ķѿռ� 
using namespace std;
main()
{
	cout<<"input two numbers"<<endl;
	int m,n;
	int j=0;
	cin>>m>>n;
	int temp[100];
	for(int i=1;i<=m,i<=n;i++)
	{
		if(m%i==0 && n%i==0)
		temp[j++]=i;
		//cout<<temp<<endl;
		continue;
	}
	//for(int k=0;k<j;k++)
	cout<<temp[j-1]<<endl;//��������������ѭ����С�����˳���ŵ�temp���鵱�еģ� 
 } 
