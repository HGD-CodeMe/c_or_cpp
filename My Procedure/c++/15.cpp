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
	 	a[j][i]=x[i][j];//ת�����������ֵ 
	 }
	 cout<<endl;//���a��ֵ֮���� 
	 }
    cout<<"arrayB:"<<endl;
	for(j=0;j<3;j++){
	
	 	for(i=0;i<2;i++)
		  cout<<a[j][i];
		  cout<<endl;
	 }
	
	 }
	 
