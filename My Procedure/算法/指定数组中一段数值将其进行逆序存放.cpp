#include<iostream>
using namespace std;
void inverse(int a[10],int m,int n)
{
	int i,t,j=1;
	for(i=0;i<n/2;i++)//  ע�����ѭ��  ��Ҫ�Ӹ�������  
		{
		t=a[m+n-2-i];
		a[m+n-2-i]=a[m-1+i];//  �� m ������ n �������� ע���轻���������еĵ�ַ���򿿽��Ĳ�����ͬ���仯 ����ʼ������ط�Ū���� 
		a[m-1+i]=t;
	      }
	for(i=0;i<10;i++)
	cout<<a[i]<<'\t';
 } 
 /*���ϴ���
 {
       int i,j,t;
	 for(i=m-1;j=m+n-2;i<=m-1+n/2;i++,j--) ���ѭ������˼ ֵ��ѧϰ 
	 {
	 	t=a[i];
	 	a[i]=a[j];
	 	a[j]=t;
	 }
 } 
 void intverse(int * p;int m, int n)
 {
      int * p1, * p2,t; 
      for(p1=p+m-1;p2=p+m-2;p<=p+m-1+n/2;p1++,p2--) ���������� 
      {
          t=*p1;
          *p1=*p2;
          *p2=t;
      }
}*/
 main()
 {
 	int x[10];
 	int i;
 	for(i=0;i<10;i++)
      cin>>x[i];
      inverse(x,2,7);
 }
