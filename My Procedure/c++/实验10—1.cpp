#include<iostream>//运用空类型函数完成数组值的转换； 
using namespace std;
void fun (int a[5]);
main()
{
	int x[5];
	int i;
	for(i=0;i<5;i++)
	cin>>x[i];
	fun(x);
	for(i=0;i<5;i++)
	cout<<x[i];
}
void fun (int a[5])
{
	int b[5];
	int i,j;
	for(i=4;i>=0;i--)
	b[4-i]=a[i];
	for(j=0;j<5;j++)
	cout<<b[j]<<'\t';
}
