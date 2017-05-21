 #include<iostream>   
using namespace std;
//long fac(int n,int t);
int  fac(int n,int t);
main()
{
	int a,b; 
	//a=10;
	b=fac(0,3)+1; //此处t是第十天的桃子的数，由于规律是在前九天  第九天吃的桃子数是 sum10+2(这个可以算 ）以后吃桃数都是后一天两倍； 
	cout<<b<<endl;
}
int fac(int n,int t)
{
	int sum;
	if(n!=9)
	sum=t+fac(n+1,2*t);  
	return sum;
}  
