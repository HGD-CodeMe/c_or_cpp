#include<iostream>
using namespace std;
main()
{
	int x[3][4],i,j,sum=0;
	cout<<"please input 12 number"<<endl;
	for(i=0;i<3;i++)
	 for(j=0;j<4;j++)
	cin>>x[i][j];
	for(i=0;i<3;i++)
	{
	 for(j=0;j<4;j++)
	  cout<<x[i][j];
	  sum=sum+x[i][j];
	 // cout<<sum;
	  cout<<endl;}
	   //sum=sum+x[i][j];
	    cout<<sum<<endl;
	  
	  //for(i=0;i<3;i++)
	    //for(j=0;j<4;j++)
	   
}
