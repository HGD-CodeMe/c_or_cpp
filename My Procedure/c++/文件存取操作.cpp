#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;
main()
{
	char ch;
	ofstream tfile("c:\\hz.dat");
	if(!tfile)
	{
		cerr<<"file can,t open"<<endl;
		exit(1);
	}
	cout<<"要写入的内容（以Ctrl+Z结束）："<<endl;
	ch=cin.get();
	while(ch!=EOF)
	{
		tfile.put(ch);
		ch=cin.get();
	}
	tfile.close();
	ifstream hfile("c:\\hz.dat",ios::in);
	if(!hfile)
	{
		cerr<<"file can,t open"<<endl;
		exit(1);
	}
	int i=0;
	while(hfile.get(ch))
	{
		cout<<ch;
		if(ch=='\n')
			i++;
	}
	cout<<endl<<"行数为："<<i<<endl;
	hfile.close();
}
