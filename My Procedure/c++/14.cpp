#include<iostream>//Ϊʲô����x[10]�������в��� 
using namespace std;
main()
{
	int x[10],a,b,c;
	cout<<"please input 10 numbers"<<endl;
	for(a=0;a<=9;a++)
	cin>>x[a];
	cout<<endl;
	for(c=1;c<=9;c++)
	for(a=0;a<=9-c;a++ )
	if(x[a]>x[a+1])
	{
	b=x[a];
	x[a]=x[a+1];
	x[a+1]=b;
	}
	cout<<"the storted numbers"<<endl;
	for(a=0;a<10;a++)
	cout<<x[a]<<" ";
 } 
