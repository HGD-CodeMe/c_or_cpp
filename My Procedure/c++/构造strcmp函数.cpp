#include<iostream>
using namespace std;
int My_strcmp(const char *s1,const char *s2) 
{
	int i=0;
	while(s1[i]!=NULL&&s2[i]!=NULL)//ע��˴��� while ѭ���õ��� ����ע���ַ����������� ÿ��һ�����ᱻ�����һ��ACSII��  ������� 
	{                               //���Եõ�һ������  
	      if(s1[i]!=s2[i])break;
	      i++;
	}
	return s1[i]-s2[i];
}
main()
{
    char a[10];
    char b[10];
    cin.get(a,10);              //ע�������д��� ��������ַ�ʽ�����򱻵��������������� 
    //cin>>a;
    cin.get(b,10);
    //cin>>b;
    cout<<My_strcmp(a,b)<<endl;
    
    
}
