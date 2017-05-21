#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char a[20];
	int i,j;
	cout<<"please input a char"<<endl;
	cin.get(a,20);
	j=strlen(a);
	for(i=j-1;i>=0;i--)//注意控制下标 
	cout<<a[i];  
	//cout.put(a[i]);
}
