#include<iostream>
using namespace std;
main()
{
	int a[4];
	int i,j;
	cout<<"ÇëÊäÈë4¸öÊý"<<endl;
	for(i=0;i<4;i++)
	cin>>a[i];
	for(i=0;i<4;i++)
	{
	   a[i]=(a[i]+5)%10;
      }
      j=a[3];
      a[3]=a[0];
      a[0]=j;
      j=a[1];
      a[1]=a[2];
      a[2]=j;
      for(i=0;i<4;i++)
      cout<<a[i]<<'\t';
}
