#include<iostream>
using namespace std;
main()
{
	int sum,x,y;
	for(x=-100;x<100;x++)//考虑是否可以用一个循环 
	for(y=-100;y<100;y++)
	if(3*x+5*y==0)
	cout<<"x="<<x<<'\t'<<"y="<<y<<endl;
	
}
