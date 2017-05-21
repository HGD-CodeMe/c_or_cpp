#include<iostream>
#include<cstring>
using namespace std;
main()
{
	char a[20];
	cout<<"please input a char"<<endl;
	int i,j;
	cin.get(a,20);
	j=strlen(a)-1;
	for(i=0;i<j;i++)
	for(j=0;j>i;j--)
	 if(a[i]==a[j])
	cout<<"yes"<<endl;
	else
	cout<<"no"<<endl;
	 
	 
 } 
 
