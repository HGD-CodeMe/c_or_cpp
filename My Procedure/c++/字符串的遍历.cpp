#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char a[4][20];
	char b[20];
	int i,j;
	for(i=0;i<4;i++)
	cin>>a[i];
	for(j=0;j<4;j++)
	  for(i=0;i<4-j;i++)
	if(strcmp(a[i],a[i+1])>0)
	{
		strcpy(b,a[i]);
		strcpy(a[i],a[i+1]);
		strcpy(a[i+1],b);
	}
	for(i=0;i<4;i++)
	cout<<a[i]<<endl;
}
