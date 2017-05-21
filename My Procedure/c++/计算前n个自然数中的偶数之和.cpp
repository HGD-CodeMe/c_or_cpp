#include<iostream>
using namespace std;
int sum(int n)
{ 
      int i,sum=0;
      for(i=1;i<n;i++)
	{
	   if(i%2==0)//此处为什么不能用if(i%2) 
	   sum=sum+i;
      }
    return sum;
 } 
 main()
 {
 	int a;
 	cin>>a;
	cout<<"前n个偶数之和为："<<sum(a)<<endl;
 }
