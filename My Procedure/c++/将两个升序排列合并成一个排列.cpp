#include<iostream>
using namespace std;
main()
{
	int a[10];int b[10];int c[10];
	int k=0;
	int i,j;
	cout<<"please input two array"<<endl;
	for(i=0;i<5;i++)
	cin>>a[i];
	for(j=0;j<5;j++)
	cin>>b[i];
	for(i=0;i<5;i++)
	{
	   for(j=0;j<5;j++)
	   {  
		if(a[i]>b[j])
		 c[k++]=b[j++];
		else
		 c[k++]=a[i++];
		 break;
	   }
    }
    for(k=0;k<10;k++)
    cout<<c[k]<<'\t';
 } 
