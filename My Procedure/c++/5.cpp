#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	cout<<"请输入三个数"<<endl;
	cin>>a>>b>>c; 
	if(a>b>c)
	cout<<"a b c"<<endl;
	if(b>a>c)
	cout<<"b a c"<<endl;
	if(c>a>b)
	cout<<"c a b"<<endl;
	if(a>c>b)
	cout<<"a c b"<<endl;
	if(b>c>a)
	cout<<"b c a"<<endl;
	if(c>b>a)
	cout<<"c b a"<<endl;
}
