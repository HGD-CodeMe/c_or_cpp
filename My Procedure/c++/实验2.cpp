#include<iostream>
using namespace std;
main()
{
	int a;
	cout<<"please input age"<<endl;
	cin>>a;
	switch(a/10){
	case 0:cout<<"Сѧ";break;
	case 1:cout<<"��ѧ";break;
	case 2:cout<<"��ѧ";break;
	case 3:cout<<"����";break;
	case 4:cout<<"����";break;
	default:cout<<"error age";break;}
 } 
