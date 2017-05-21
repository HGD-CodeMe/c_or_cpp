#include<iostream>
using namespace std;
void fun(int a,int b,int c)
{
	int t;
	if(a>b)
   {
   	t=b;
   	a=b;
   	b=t;
	c=a;
   }
    if(a>c)
   {
	t=a;
	a=c;
	c=t;
	c=a;
   }
     if(b>c)
   {   
      t=c;
      a=t;
      c=b;
   }
}
main()
{
	int *max;
	int *min;
	int a,b,c;
	min=&a;
	max=&c;
	cout<<"input 3 number"<<endl;
	cin>>a>>b>>c;
	fun(a,b,c);
	cout<<"Max="<<*max<<endl;
	cout<<"Min="<<*min;
}
