#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char a[5][20];
	int i,j;
	char b[20];
	for(i=0;i<5;i++)
	cin>>a[i];
	for(j=0;j<5;j++)
	 for(i=0;i<4-j;i++)
	if (strcmp(a[i],a[i+1])>0)
	{
		strcpy(b,a[i+1]);
		strcpy(a[i+1],a[i]);
		strcpy(a[i],b);
	}
	for(i=0;i<5;i++)
	cout<<a[i]<<'\t';
}
