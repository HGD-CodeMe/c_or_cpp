#include<iostream>
using namespace std;
int fun(int m, int prime[100])
{
	int i,j,k=0;
	for(i=2;i<m;i++)//���ѭ��������ô���   
	{
	  for(j=2;j<i/2;j++)// �����Ƿ���Կ��� j<i/2; 
	     if(i%j==0)break;
	     if(j>=i/2)prime[k++]=i;//��С�ڵ� m ��ĳ��ֵ �����С������ 2 ֮�����һ��������ȡ��Ϊ0 ������ ��ѭ��  ������һ�� �ж�һ�����Ƿ������� 
	  //if(i%j!=0){;break;}
	//������ͬ  �����и�����һ����������ֵ�ķ���  ����һ��ä�� 
	 }
	  return k;
}
main()
{
	int i,j,sum;
	int prime[100];
	cout<<"Input a number"<<endl;
	cin>>j;
	fun(j,prime);
	sum=fun(j,prime);
	for(i=0;i<sum;i++)
	cout<<prime[i]<<'\t';
}
