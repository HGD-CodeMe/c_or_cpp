#include<iostream>
using namespace std;
main()
{
	int x[2][3]={{1,5,9},{2,6,8}};
	int a[3][2],i,j;
	cout<<"arrayA:"<<endl;
	 for(i=0;i<2;i++){
	 for(j=0;j<3;j++){
	 	cout<<x[i][j]<<" ";
	 	a[j][i]=x[i][j];//转换两个数组的值 
	 }
	 cout<<endl;//输出a的值之后换行 
	 }
    cout<<"arrayB:"<<endl;
	for(j=0;j<3;j++){
	
	 	for(i=0;i<2;i++)
		  cout<<a[j][i];
		  cout<<endl;
	 }
	
	 }
	 
