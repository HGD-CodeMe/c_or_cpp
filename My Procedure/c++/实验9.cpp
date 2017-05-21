#include<iostream>
using namespace std;
int min(int x,int y);
int min(int x,int y,int z);
main()
{
	int a,b,c;
	cin>>a>>b>>c;
	cout<<"两个数中的最小值"<<min(a,b)<<endl;
	cout<<"三个数中的最小值"<<min(a,b,c)<< endl;
}
int min(int x,int y)
{
	if(x>y)
	return y;
	else
	return x;
	
}
int min(int x,int y,int z)
{
	int t;
	if(x>y)
	{
	t=x;
	x=y;
	}
	if(x>z)
	{
		t=x;
		x=z;
	}
	if(y>z)
	{
		t=y;
		y=z;
		x=y;
	}
	return x;
}
