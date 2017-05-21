#include<iostream>
using namespace std;
int My_strcmp(const char *s1,const char *s2) 
{
	int i=0;
	while(s1[i]!=NULL&&s2[i]!=NULL)//注意此处的 while 循环用得少 还有注意字符串输入计算机 每输一个都会被翻译成一个ACSII码  所以相减 
	{                               //可以得到一个整数  
	      if(s1[i]!=s2[i])break;
	      i++;
	}
	return s1[i]-s2[i];
}
main()
{
    char a[10];
    char b[10];
    cin.get(a,10);              //注意这两行代码 如果按这种方式输入则被调函数不会输出结果 
    //cin>>a;
    cin.get(b,10);
    //cin>>b;
    cout<<My_strcmp(a,b)<<endl;
    
    
}
