#include<iostream>
#include<string.h>
#include<ctype.h>//���ͷ�ļ����������� isdigit(�����ַ��� 1 )  isalpha(�����ַ��� 1)  
using namespace std;
main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,0}; 
	char x;
	int i,j;
	cout<<"Input a char "<<endl;
	cin>>x;
          // x=getchar();//�����ַ��ĸ�ʽֻ�������ʽ ��������ĺ��� 
	for(i=0;i<10;i++)
	if(x==a[i])//�˴������� Ϊʲô����  x��0�� ��֮�Ƚϲ��� �� 
	  //if((x>='a'&&x<='z')||(x>='A'&&x<='Z'))//�˴��ַ�����ֱ�ӱȽ� ä�� 
	{cout<<"����ַ���������"<<endl;break;}
     else
     {cout<<"����ַ�������ĸ";break;}
    //cout<<m<<endl;
    //cout<<a[i];
   // cout<<"���ַ�������ĸ"<<endl;
   // else
   // cout<<"���ַ���������"<<endl; 
    //if(isdigit(x))
    //cout<<"����ַ���������"<<endl;
    //else
    //cout<<"����ַ�������ĸ";
}
	

