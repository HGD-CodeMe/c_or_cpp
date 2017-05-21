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
	cout<<"第一天桃子的总数"<<fun(10)<<endl;
}
