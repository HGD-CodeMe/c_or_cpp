#include<iostream>
using namespace std;
main()
{
	int x[10],i,j=0;
	cout<<"please input 10 number"<<endl;
	for(i=0;i<10;i++)
	cin>>x[i];
	for(i=0;i<10;i++)
	if(x[i]%2==0)
	j++;
	cout<<j<<endl;
	
}
