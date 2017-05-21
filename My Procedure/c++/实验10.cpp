
#include<iostream>
using namespace std;//此题首先要注意被调函数中数组值的的值的调换，需要定义一个空的数组完成原数组的值的调换，
int swap(int a[5]);//再其次要在主函数输出被调函数中新的数组需要运用指针，将主函数的地址指向被调函数， 
main()             //还要注意在主函数输出时还需要指明指针指向x的首地址 再输出 如果再定义一个整数循环输出被调的数组会出错，也就是i不能换成j; 
{
	int x[5],i;
	int *pt=x;
	for(i=0;i<5;i++)
      cin>>x[i];
      //for(j=0;j<5;j++)
      x[i]=swap(pt);
      pt=x;
      for(i=0;i<5;i++)
	 cout<<x[i];
	  
}
int swap(int a[5])
{
	int i,j; 
	int t[5];
	for(i=4;i>=0;i--)
	t[4-i]=a[i];
	 for(j=0;j<5;j++)
	 a[j]=t[j];
	 for(j=0;j<5;j++)
	 //*pt++=a[j];
   return a[j];
}
