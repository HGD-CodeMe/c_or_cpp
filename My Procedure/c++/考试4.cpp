#include<iostream>
using namespace std;
main()
{
	int x,n,i,sum=1;
	cout<<"输入底数"<<endl;
	cin>>x;
	cout<<"输入指数"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	sum=x*sum;
	cout<<"sum="<<sum<<endl;
 } 
