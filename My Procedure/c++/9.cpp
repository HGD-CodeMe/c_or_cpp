#include<iostream>//求两个数最大公约数// 
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
    while(r!=0)   //此处是辗除法 应加深理解// 
    {
    	r=m%n;
    	m=n;
        n=r;
	}
	cout<<"最大公约数是"<<n<<endl;

	
	}

