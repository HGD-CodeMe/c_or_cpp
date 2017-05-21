#include<iostream>//这个算法时间复杂度太高，多了一个很大的循环 ； 
using namespace std;
main()
{
	for(int i=0;i<=20;i++)
	{
		for(int j=0;j<=33;j++)
		{
			for(int k=0;k<=100;k++)
			{
				if(5*i+3*j+k/3==100&&i+k+j==100)//此处可省略，看优解； 
				{
				cout<<"公鸡"<<i<<endl;
				cout<<"母鸡"<<j<<endl;
				cout<<"小鸡"<<k<<endl;
				break;
			    }
			}
		
		}
		cout<<endl; 
	}
	
}
