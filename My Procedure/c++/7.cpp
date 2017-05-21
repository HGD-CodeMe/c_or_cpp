#include<iostream>
using namespace std;
main()
{
	int num;
	cout<<"please put a score"<<endl;
	cin>>num;
	if (num<60)
	cout<<"the score"<<num<<" is D"<<endl;
	if (num<=70&&num>=60)
    cout<<"the score"<<num<<" is C"<<endl;
	if (num>=70&&num<85)
	cout<<"the score"<<num<<" is B"<<endl;
	if (num>=85)
	cout<<"the score"<<num<<" is A"<<endl;

}
