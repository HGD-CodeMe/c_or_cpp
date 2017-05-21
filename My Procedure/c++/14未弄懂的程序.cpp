#include<iostream>
using namespace std;//将十个数按从小到大大顺序输出 
main()
{
	int x[11],a,b,c;
	cout<<"please input 10 numbers"<<endl;
	for(a=1;a<=10;a++)
	cin>>x[a];
	cout<<endl;
	for(c=1;c<=9;c++)
	for(a=1;a<=10-c;a++ )
	if(x[a]>x[a+1])
	{
	b=x[a];
	x[a]=x[a+1];
	x[a+1]=b;
	}
	cout<<"the storted numbers"<<endl;
	for(a=1;a<11;a++)
	cout<<x[a]<<" ";
 } 
