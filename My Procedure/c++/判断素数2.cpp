#include<iostream>
using namespace std;
main()
{
	int k=0;
	for(int i=1;i<=100;i++)
	{
		for(k=2;k<=i/2;k++)
		{
		//if(i%k!=0)这里不能这样定义，因为当遇到第一个不能取余为零的数时他就会跳出循环，而我们知道，这个循环必须要遍历结束 
		if(i%k==0)//这样定义1也有可能在循环结束前跳出循环 
		//cout<<i<<'\t';
		  break;
	    }
	    if(k>i/2)//这个相当于判断循环是否循环结束结束 
		  cout<<i<<'\t';
	} 
 } 
