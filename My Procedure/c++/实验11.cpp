 #include<iostream>   
using namespace std;
//long fac(int n,int t);
int  fac(int n,int t);
main()
{
	int a,b; 
	//a=10;
	b=fac(0,3)+1; //�˴�t�ǵ�ʮ������ӵ��������ڹ�������ǰ����  �ھ���Ե��������� sum10+2(��������� ���Ժ���������Ǻ�һ�������� 
	cout<<b<<endl;
}
int fac(int n,int t)
{
	int sum;
	if(n!=9)
	sum=t+fac(n+1,2*t);  
	return sum;
}  
