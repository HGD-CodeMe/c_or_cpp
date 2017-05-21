#include<iostream>
using namespace std;
void inverse(int a[10],int m,int n)
{
	int i,t,j=1;
	for(i=0;i<n/2;i++)//  注意这个循环  需要加个大括号  
		{
		t=a[m+n-2-i];
		a[m+n-2-i]=a[m-1+i];//  第 m 个数的 n 个数逆序 注意需交换的数组中的地址是向靠近的并不是同步变化 ；开始在这个地方弄混了 
		a[m-1+i]=t;
	      }
	for(i=0;i<10;i++)
	cout<<a[i]<<'\t';
 } 
 /*书上代码
 {
       int i,j,t;
	 for(i=m-1;j=m+n-2;i<=m-1+n/2;i++,j--) 这个循环有意思 值得学习 
	 {
	 	t=a[i];
	 	a[i]=a[j];
	 	a[j]=t;
	 }
 } 
 void intverse(int * p;int m, int n)
 {
      int * p1, * p2,t; 
      for(p1=p+m-1;p2=p+m-2;p<=p+m-1+n/2;p1++,p2--) 这个方面很弱 
      {
          t=*p1;
          *p1=*p2;
          *p2=t;
      }
}*/
 main()
 {
 	int x[10];
 	int i;
 	for(i=0;i<10;i++)
      cin>>x[i];
      inverse(x,2,7);
 }
