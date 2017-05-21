#include<iostream>
using namespace std;
main()
{
	char a[10]; char *p;
	int i;
	cin.get(a,10);
	p=a;
	for(i=0;i<5;i++)
	cout<<*p++;
	
}
