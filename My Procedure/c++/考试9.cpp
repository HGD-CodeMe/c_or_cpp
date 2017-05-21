#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char a[20];
	char b[20];
	cout<<"input two char"<<endl;
	cin>>a;
	cin>>b;
	if (strcmp(a,b)>0)
	cout<<b<<'\t'<<a;
	else
	cout<<a<<'\t'<<b;
	
}
