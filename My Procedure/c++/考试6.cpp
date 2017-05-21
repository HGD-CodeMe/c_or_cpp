#include<iostream>
using namespace std;
main()
{
	int a[10];
	int i,m,n,t,p;
	cout<<"Input 10 number"<<endl;
	for(i=0;i<10;i++)
	cin>>a[i];
	m=a[0];
	n=a[0];
	for(i=0;i<10;i++)
   { 
	if(m<a[i])
	m=a[i];
	if(n>a[i])
	n=a[i];
   }
	t=m;
   	m=a[9];
   	a[9]=t;
   	p=n;
   	n=a[0];
   	a[0]=p;
	for(i=0;i<10;i++)
	cout<<a[i]<<'\t';
//cout<<m<<n;
	
	
 } 
