#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char a[20];
	char b[20];
	int i,sum=0,m,n;
	cin>>a;
	cin>>b;
	m=strlen(a);
	n=strlen(b);
	if(strcmp(a,b)>0)
	 { for(i=0;i<m;i++)
	  sum=sum+a[i];
	  cout<<sum;} 
	else
	  for(i=0;i<n;i++)
	  sum=sum+b[i]; 
	  cout<<sum;
}
