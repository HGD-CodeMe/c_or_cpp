#include<iostream>//�����������Լ��// 
using namespace std;
main()
{
	int a,b,m,n,r,t;
	cin>>m>>n;
	if(m<n)
	{
	  t=m;m=n;n=t; 
	}
	//a=m;b=n;
    while(r!=0)   //�˴���շ���� Ӧ�������// 
    {
    	r=m%n;
    	m=n;
        n=r;
	}
	cout<<"���Լ����"<<n<<endl;

	
	}

