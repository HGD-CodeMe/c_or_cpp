#include<iostream>//������ָ�������Ӧ�� ��������ַ�����ķ�ʽʮ������ �м���Ӧ��ע��ĵط�  ���� 
using namespace std;
main()
{
	int i;
      char *p[]=//�˴�ע���������в����Դ�����ֵ ���һ�Ҫ���Ⱥ� 
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
	//return (i<1||i>7)?p[0]:p[i]; �˴���Ҫ��Ϊ�˽�����������ú��� 
	cin>>i;
	cout<<p[i-1]<<endl;
	
}
