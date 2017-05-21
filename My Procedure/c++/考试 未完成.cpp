#include<iostream>
#include<string.h>
#include<ctype.h>//这个头文件含两个函数 isdigit(是数字返回 1 )  isalpha(是数字返回 1)  
using namespace std;
main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,0}; 
	char x;
	int i,j;
	cout<<"Input a char "<<endl;
	cin>>x;
          // x=getchar();//输入字符的格式只能用这格式 如果用下文函数 
	for(i=0;i<10;i++)
	if(x==a[i])//此处有疑问 为什么定义  x【0】 与之比较不行 ？ 
	  //if((x>='a'&&x<='z')||(x>='A'&&x<='Z'))//此处字符可以直接比较 盲点 
	{cout<<"这个字符串是数字"<<endl;break;}
     else
     {cout<<"这个字符串是字母";break;}
    //cout<<m<<endl;
    //cout<<a[i];
   // cout<<"该字符串是字母"<<endl;
   // else
   // cout<<"该字符串是数字"<<endl; 
    //if(isdigit(x))
    //cout<<"这个字符串是数字"<<endl;
    //else
    //cout<<"这个字符串是字母";
}
	

