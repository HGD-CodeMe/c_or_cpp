#include<iostream>
using namespace std;
main()
{
	int a;
	cout<<"please input age"<<endl;
	cin>>a;
	if(a<10)
	cout<<"小学"<<endl;
	else if(a>=10&&a<20)
	cout<<"中学"<<endl;
	else if(a>=20&&a<30)
	cout<<"大学"<<endl;
	else
	cout<<"工作"<<endl; 
}
