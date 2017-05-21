#include<iostream>
using namespace std;
main()
{
	int a;
	cout<<"please input age"<<endl;
	cin>>a;
	switch(a/10){
	case 0:cout<<"小学";break;
	case 1:cout<<"中学";break;
	case 2:cout<<"大学";break;
	case 3:cout<<"工作";break;
	case 4:cout<<"旅游";break;
	default:cout<<"error age";break;}
 } 
