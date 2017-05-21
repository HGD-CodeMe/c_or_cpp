#include<iostream>
using namespace std;
main()
{
	int x,y,z;
	int count=0;
	for(x=0;x<20;x++)
	{
		for(y=0;y<=33;y++)
		{
			z=100-x-y;
			if((z%3==0)&&(5*x+3*y+z/3==100))
			{
				count++; 
				cout<<"公鸡："<<x<<"母鸡："<<y<<"小鸡："<<z<<endl; 
			}
		}
	}
	if(count==0)
	{
		cout<<"此问题无解"<<endl;
	}
}
