#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
main()
{
	ofstream outfile("stuInfo.txt");
	if(!outfile)
	{
		cout<<"����ļ�stuInfo.txt��ʧ�ܣ�"<<endl;
	}
	cout<<"������ѧ���ĸ�����Ϣ������˳��Ϊ��"<<endl<<"���� ѧ�ţ��м��Կո���߻س�������\n"<<"�����exit 0����\n";;
	char *name=new char[20];
	int No;
	cin>>name>>No;
	while(strcmp(name,"exit"))
	{
	   outfile<<name<<","<<No<<endl;
	   cin>>name>>No;
    }
    outfile.close();
    cout<<"\n�ļ���д��.\n";
    delete[] name;
}
 
