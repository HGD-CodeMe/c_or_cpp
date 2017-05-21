#include<iostream>
#include<cstring>
using namespace std;
main()
{
	int a[5],i,j,t;
	int b[5];
	for(i=0;i<5;i++)
	cin>>a[i];
	for(i=4;i>=0;i--)
	b[4-i]=a[i];
	 for(j=0;j<5;j++)
  // memcpy(a,b,sizeof(b));
	    //for(i=0;i<5;i++)
a[j]=b[j];
 for(j=0;j<5;j++)
	


	cout<<a[j] ;
}
