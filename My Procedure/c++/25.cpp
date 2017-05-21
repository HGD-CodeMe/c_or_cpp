#include<iostream>
using namespace std; 
void print(int p[]);
main()
{
	int score[3][4]={{1,2,3,4},{5,6,7,8},{9,0,1,2}};
	int num ;
	cout<<"please input 0-2 num"<<endl;
	cin>>num;
	print(score[num]);//这一步是关键 可以学习怎样运用void函数 这个非常重要； 
}
void print (int p[])
{
	int i;
	for(i=0;i<4;i++)
	cout<<p[i]<<"";
}

