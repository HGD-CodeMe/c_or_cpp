#include<iostream>
using namespace std;
int fac(int a,int b)
{
	int sum=1;
	if(a==1||b==0)
	return sum;
	else
	sum=a*fac(a,b-1);
	return sum;
}
main()
{
	int x,n;
	cout<<"�������"<<endl;
	cin>>x;
	cout<<"����ָ��"<<endl;
	cin>>n;
	cout<<"ָ���ĺ�"fac(x,n)<<endl;
}
