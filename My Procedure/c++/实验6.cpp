#include<iostream>
using namespace std;
main()
{
	int x[3][3],i,j,sum=0;
	cout<<"please input 9 number"<<endl;
	for(i=0;i<3;i++)
	 for(j=0;j<3;j++)
	 cin>>x[i][j];
    for(i=0;i<3;i++)
	 for(j=0;j<3;j++)
	 if(i==j)
	 sum=sum+x [i][j];
	 cout<<sum<<endl;
	 
}
