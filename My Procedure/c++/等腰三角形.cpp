#include<iostream>
using namespace std;
main()
{
	for(int i=0;i<10;i++)
	{
		for(int j=1;j<10-i;++j)
		{
			cout<<" ";
		}
		for(int k=0;k<=i;++k)
		{
			cout<<"* ";//Å£±Æ 
		}
		cout<<endl;
	}
 } 
