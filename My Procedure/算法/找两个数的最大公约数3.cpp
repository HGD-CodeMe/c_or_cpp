#include<iostream>//����ŷ������㷨  շת��� 
using namespace std;
main()
{
	cout<<"please input two numbers"<<endl;
	int n,m;
	int r=0;
	cin>>n>>m;
	r=m%n;//��һ�������� 
	while(r!=0)
	{
		m=n;
		n=r;
		r=m%n;
	}
	cout<<n<<endl;
 } 
