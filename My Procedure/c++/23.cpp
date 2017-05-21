#include<iostream>
using namespace std;
int max(int a[4][4]);
main()
{
	int x[4][4],i,j,b;
	for(i=0;i<4;i++)
	  for(j=0;j<4;j++)
	  cin>>x[4][4];
	  b=max(x);
	  cout<<b<<endl;
 } 
 int max(int a[4][4])
 {
 	 int i,j,k;
 	 for(i=0;i<4;i++)
 	   for(j=0;j<4;j++)
 	    //for(n=1;n<16;n++)
 	   if(a[i][j]>k)
 	   	k=a[i][j];
 	   	return k;
		
 }
