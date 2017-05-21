#include<iostream>
using namespace std;
int fun(int a[5])
{
	int i,j;
	for(i=0;i<=5/2;i++)
	{
	j=a[i];
	a[i]=a[4-i];
    a[4-i]=j;
    }
}
main()
{
	int x[5];
	int i;
	for(i=0;i<5;i++)
	cin>>x[i];
	fun(x);
	for(i=0;i<5;i++)
	cout<<x[i]; 
}
