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
	cout<<"输入底数"<<endl;
	cin>>x;
	cout<<"输入指数"<<endl;
	cin>>n;
	cout<<"指数的和"fac(x,n)<<endl;
}
