#include<iostream>
using namespace std;
void swap(int*x,int*y);
main()
{

	int a,b;
	cout<<"please input 2 number"<<endl;
	cin>>a>>b;
	swap(&a,&b);
	cout<<a<<'\t'<<b;
	
 } 
 void swap(int*x,int*y)
 {
   int z;
 z=*x;
 *x=*y;
 *y=z; 
}
