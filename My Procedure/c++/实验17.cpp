#include<iostream>
using namespace std;
int fun(int n)
{
	int sum;
	if(n==1)
	sum=1;
	else
	sum=(fun(n-1)+1)*2;																																																																																																																																																																																																																																		
	return sum;
}
main()
{
	cout<<"��һ�����ӵ�����"<<fun(10)<<endl;
}
