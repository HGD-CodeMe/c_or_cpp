#include<iostream>
using namespace std;//����Ӧ����ָ�������� 
main()
{
	int a[10]={1,2,45,27,98,34,5,6,7,89};
	int i,x;
	cin>>x;
	for(i=0;i<10;i++)
      if(x==a[i])
      {cout<<"�������λ���ڵڣ�"<<i+1<<endl;break;}//�˴��� break �÷���һ��ä�� 
	else
	cout<<"Not Found"<<endl;//������������� 
    
 }
