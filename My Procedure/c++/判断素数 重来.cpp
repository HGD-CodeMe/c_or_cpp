#include<iostream>
using namespace std;
void prime(int n,int * f)//此处需要注意 定义一个指针 值只为 0 或 1；用于判断 n 是否为素数 
{
	int k;
	* f=1;              // 此处 k<n/2; 试图方便 实际 k 小于 n的平方根即可  如果数不是素数 则在小于它的数内 必有两个因子 一个小于它的一半 
	for(k=2;k<=n/2;k++)// 另一个大于它的一半  
	if(!(n%k))         //此处（n%k） 如果余数为0 则！0为 1；if条件句成立 执行随后的语句； 
	*f=0;
	//*f=1;            这条语句放在此处 也在if条件允许执行的范围内 
 } 
 main()
 {
 	int m,m1,flag1,flag2;
 //	int m1=(m%10)*10+m/10;
 	for(m=0;m<100;m++)
 	{
 		m1=(m%10)*10+m/10;//这个不可放在循环外 因为它也要参与循环判断 
 		prime(m,&flag1);
 		prime(m1,&flag2);
 		if(flag1&&flag2)//这条语句与上条语句意思差不多 当 flag1 flag2 都为1时 条件成立  执行下条语句 
 		cout<<m<<'\t';
	 }
 }
