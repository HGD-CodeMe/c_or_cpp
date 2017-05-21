#include<iostream>
using namespace std;
void swap(int a[10])
{
	int i,j,t;
	for(j=0;j<10;j++)
	 for(i=0;i<9-j;i++)
	 if(a[i]>a[i+1])
	 {
	 t=a[i+1];
	 a[i+1]=a[i];
	 a[i]=t;
       }
	 for(i=0;i<10;i++)
	 cout<<a[i];
 } 
 main()
 {
 	int x[10];
 	int i;
 	for(i=0;i<10;i++)
 	cin>>x[i];
 	swap(x);
 }
