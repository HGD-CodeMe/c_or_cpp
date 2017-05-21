#include<iostream>
using namespace std;
main()
{
	int a[5]={1,3,5,7,9};
	int b[5]={2,4,6,8,10};
	int c[10];
	int i=0,j=0,k=0;
	while(i<5&&j<5)
	{
		if(a[i]<=b[j])
		c[k++]=a[i++];
		else
		c[k++]=b[j++];
	}
	while(i<5) c[k++]=a[i++];
	while(j<5) c[k++]=b[k++];
	for(k=0;k<10;k++)
	cout<<c[k]<<endl;
}
