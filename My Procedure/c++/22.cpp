#include<iostream>
using namespace std;
float average(float a[10]);
main()
{
	float x[10],c;
	int i;
	cout<<"please input 10 unmber"<<endl;
	for(i=0;i<10;i++)
	cin>>x[i]; 
	b=average(x);//ע���������ʱ�������������� 
	cout<<b;
}
float average(float a[10])
{
	float sum=0,c;
	int i;
	for(i=0;i<10;i++)
	sum=sum+a[i];
	c=sum/10;
	return c;
	
	
	
	
}
