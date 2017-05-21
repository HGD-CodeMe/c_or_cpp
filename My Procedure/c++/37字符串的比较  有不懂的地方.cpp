#include<iostream>//此题刚开始走进了思维误区  先用 m【4】来与之比较  这里需注意 i 是从0开始变化的  如果用 m【4】 
using namespace std;//也就是最后一个数 与前面一个一个相比较  这只是完成了最后一个数与前面的数的比较  是两个数之间的比较 
#include<string.h>//初始赋值从第一个数开始两两相比较 条件允许互换值 形成了从头开始逐个比较不会出错 
main()
{
	char m[5][20];//注意此处字符串数组的定义格式 
	int i,j;
	for(i=0;i<5;i++)
	cin>>m[i];
	char max[20];
	strcpy(max,m[0]);
	  for(i=0;i<5;i++)
	if(strcmp(max,m[i])<0)//此处还要出这个条件语句的判断格式 以及复制字符串函数的规则 
	strcpy(max,m[i]);
	cout<<max<<endl;
	
}

