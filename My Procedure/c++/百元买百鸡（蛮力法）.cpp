#include<iostream>//����㷨ʱ�临�Ӷ�̫�ߣ�����һ���ܴ��ѭ�� �� 
using namespace std;
main()
{
	for(int i=0;i<=20;i++)
	{
		for(int j=0;j<=33;j++)
		{
			for(int k=0;k<=100;k++)
			{
				if(5*i+3*j+k/3==100&&i+k+j==100)//�˴���ʡ�ԣ����Ž⣻ 
				{
				cout<<"����"<<i<<endl;
				cout<<"ĸ��"<<j<<endl;
				cout<<"С��"<<k<<endl;
				break;
			    }
			}
		
		}
		cout<<endl; 
	}
	
}
