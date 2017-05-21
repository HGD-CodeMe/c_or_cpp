#include<iostream>
using namespace std;
main()
{
	int x[10],i,j,a;
	cout<<"please input 10 number"<<endl;
	for(i=0;i<10;i++)
	cin>>x[i];
	cout<<endl;
    for(j=1;j<10;j++)
	for(i=0;i<11-j;i++)
	if(x[i]>x[i+1]){
     a=x[i];
     x[i]=x[i+1];
     x[i+1]=a;}
     for(i=0;i<10;i++)
     cout<<x[i]<<" ";
     cout<<endl;
	
}
