#include<iostream>//������������۰����򣬺���Ҫ�Ļ����㷨 
using namespace std;
main()
{
	int a[4]={3,5,8,11};
	int b[7]={2,6,8,9,11,15,20};
	int c[20];
	int k=0,i=0,j=0;
	/*int *pa,*pb,*pc;
	pa=a;
	pb=b;
	pc=c;
	while(pa!=&a[4]||pb!=&b[7])
	{
		
	}*/
	while(i<4&&j<7)
	{
	    if(a[i]>=b[j])
		{
		  c[k++]=b[j++];//�����ǽ��������һ���ϲ��ˣ� 
		  //j++;
		  
	    }
		else
		{
		  c[k++]=a[i++];
		  //i++;
		  
	    }
	}
	while(i==4)//���ﲻ����if��䣬�����ǽ�a�������b����ʣ�µ�Ԫ���ŵ�c������棬�е��������δ��룻 
		c[k++]=b[j++];
    while(j==7)
        c[k++]=a[i++];
	for(int n=0;n<11;n++)
		cout<<c[n]<<'\t';
	
 } 
