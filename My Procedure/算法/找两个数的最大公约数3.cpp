#include<iostream>//利用欧几里得算法  辗转相除 
using namespace std;
main()
{
	cout<<"please input two numbers"<<endl;
	int n,m;
	int r=0;
	cin>>n>>m;
	r=m%n;//这一步不可少 
	while(r!=0)
	{
		m=n;
		n=r;
		r=m%n;
	}
	cout<<n<<endl;
 } 
