#include<iostream>
using namespace std;
main()
{
      int a[3][3];
      int i,j;
       for(i=0;i<3;i++)
	 {  for(j=0;j<3;j++)
	     cin>>a[i][j];
	     cin<<endl;
		 }      
  int (*p)[3];//此处注意二维数组需定义一个指针数组； 
	//int i,j;
	p=a;
	for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
     
    cout<<*(*(p+j)+i); 
    cout<<endl;
}
    //for(i=0;i<3;i++)
       //{
	 //  for(j=0;j<3;j++)
//	cout<<*p++;
//	cout<<endl;

} 
