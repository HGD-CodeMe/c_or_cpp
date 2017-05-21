#include<iostream>
using namespace std;//此题应该用指针来运算 
main()
{
	int a[10]={1,2,45,27,98,34,5,6,7,89};
	int i,x;
	cin>>x;
	for(i=0;i<10;i++)
      if(x==a[i])
      {cout<<"这个数的位置在第："<<i+1<<endl;break;}//此处的 break 用法是一个盲点 
	else
	cout<<"Not Found"<<endl;//后面这个有问题 
    
 }
