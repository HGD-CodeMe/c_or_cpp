#include<iostream>//此题是指针数组的应用 这个定义字符数组的方式十分有用 有几个应该注意的地方  如下 
using namespace std;
main()
{
	int i;
      char *p[]=//此处注意中括号中不可以带参数值 而且还要带等号 
	{
	"January",
	"Fbruary",
	"March",
	"April",
      "June",
	"May",
	"July",
	"August",
	"September",
	"October",
	"November",
	"December"
	};
	//return (i<1||i>7)?p[0]:p[i]; 此处主要是为了将这个当做调用函数 
	cin>>i;
	cout<<p[i-1]<<endl;
	
}
