#include<iostream>
using namespace std;
int max(int a[5])
{
	int i;
	int max;
	for(i=0;i<5;i++)
	if(a[i]>max)
	max=a[i];
	return max;
}
main()
{
	int x[5];
	int i;
	cout<<"please input 5 number"<<endl;
	for(i=0;i<5;i++)
	cin>>x[i];
	cout<<"max="<<max(x)<<endl;
	
}
