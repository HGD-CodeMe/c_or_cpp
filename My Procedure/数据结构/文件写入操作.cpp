#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
main()
{
	ofstream outfile("stuInfo.txt");
	if(!outfile)
	{
		cout<<"输出文件stuInfo.txt打开失败！"<<endl;
	}
	cout<<"请输入学生的个人信息，输入顺序为："<<endl<<"姓名 学号，中间以空格或者回车隔开。\n"<<"输出以exit 0结束\n";;
	char *name=new char[20];
	int No;
	cin>>name>>No;
	while(strcmp(name,"exit"))
	{
	   outfile<<name<<","<<No<<endl;
	   cin>>name>>No;
    }
    outfile.close();
    cout<<"\n文件已写入.\n";
    delete[] name;
}
 
