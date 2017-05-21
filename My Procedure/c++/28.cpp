#include<iostream>
using namespace std;
#include<string>
class Day
{
	public:
	void getDay(int a,int b,int c);
	void setDay(int a,int b,int c);
	void showDay();
	Day()
	{
		year=0;month=0;day=0;
	}
	private:
	int year,month,day;
 };
// void Day::getDay(int a,int b,int c)
// {
 	//return a,b,c;
// }
//Day(int a,int b,int,c)
//{
  //year=a;
  //month=b;
  //day=c;	
//}
 void Day::setDay(int a,int b,int c)
 {
    year=a;
    month=b;
    day=c;
 }
 void Day::showDay()
 {
 	cout<<year<<"/"<<month<<"/"<<day<<endl;
 }
 main()
 {
 	Day to;
 	to.showDay();
 	to.setDay(2016,4,9);
 	to.showDay();
 	//setDay.showDay();
}
