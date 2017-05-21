#include<iostream>
using namespace std;
int fun(int m, int prime[100])
{
	int i,j,k=0;
	for(i=2;i<m;i++)//这个循环可以这么理解   
	{
	  for(j=2;j<i/2;j++)// 这里是否可以考虑 j<i/2; 
	     if(i%j==0)break;
	     if(j>=i/2)prime[k++]=i;//当小于的 m 的某个值 如果在小于它到 2 之间存在一个数可以取余为0 则跳出 内循环  这与上一次 判断一个数是否是素数 
	  //if(i%j!=0){;break;}
	//有所不同  这里有个传递一个数组所有值的方法  这是一个盲点 
	 }
	  return k;
}
main()
{
	int i,j,sum;
	int prime[100];
	cout<<"Input a number"<<endl;
	cin>>j;
	fun(j,prime);
	sum=fun(j,prime);
	for(i=0;i<sum;i++)
	cout<<prime[i]<<'\t';
}
