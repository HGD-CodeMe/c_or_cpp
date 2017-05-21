#include<iostream>
using namespace std;
main()
{
	int a[10],j,i,b,n;
	cout<<"please input 10 number"<<endl;
	for(i=0;i<10;i++)
	cin>>a[i];
	//cout<<endl;
	 for(n=1;n<=9;n++)
	    for(i=0;i<10-n;i++)
	  if(a[i]>a[i+1])
	 {
	  b=a[i];
	 a[i]=a[i+1];
	 a[i+1]=b;}//这个大括号必须要 
	 for(i=0;i<10;i++)
	 cout<<a[i]<<" ";
	cout<<endl;
	 
	 
	 
	
}
