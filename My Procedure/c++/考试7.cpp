#include<iostream>
using namespace std;
main()
{
	int a[3][3];
	int i,j,m,n,x;
	for(i=0;i<3;i++)
	 for(j=0;j<3;j++)
	 cin>>a[i][j];
	 m=a[0][0];
	 n=a[0][0];
	for(i=0;i<3;i++)
	 for(j=0;j<3;j++)
	 {
	 	if(m<a[i][j])
	 	m=a[i][j];
	 	if(n>a[i][j])
	 	n=a[i][j];
	 }
	a[1][1]=m;
	a[0][0]=n;
	a[0][2]=n;
	a[2][0]=n;
	a[2][2]=n;
      for(i=0;i<3;i++)
	 {
	   for(j=0;j<3;j++)
	   cout<<a[i][j]<<'\t';
	   cout<<endl;
}
}
