#include <iostream>//职工档案管理系统 
//#include <string>
using namespace std;
#include<string.h>//此平台运用strcpy函数只能用这种方式 
class Salary {
	public:
		float bacsalary;
		float posalary;
		float rent,elec,water;
		float realsalary();
};
enum Position //枚举类型定义一个类 
{
    MANAGER,
    ENGINEER,
    EMPLOYEE,
    WORKER
};
class Date {
	public:
		void init(int yy,int mm,int dd);
		void Show();
	private:
		int year,month,day;

};
class Employee {
	public:
		void Postion(char  Depart[20],char  Name[20],Date bron,Position po,Date tdateofwork);
		void setSalary(float a,float b,float c,float d,float e);
		float getRealsalary();
		void Show();
	private:
		char m_depart[20];
		char m_name[20];
		Date m_bron;
		Position m_po;
		Date m_tdateofwork;
		Salary sar;
};
float Salary::realsalary() {
	return bacsalary+posalary-rent-elec-water;
}
float Employee::getRealsalary() {
	return sar.realsalary();
}
void Employee::setSalary(float a,float b,float c,float d,float e) {
	sar.bacsalary=a;
	sar.posalary=b;
	sar.rent=c;
	sar.elec=d;
	sar.water=e;
}
void Date::init(int yy,int mm,int dd)//此处为什么这样写？ 
{
	year=(yy>=1900&&yy<=2100)?yy:1900;
	month=(mm>=1&&mm<=12)?mm:1;
	day=(dd>=1&&dd<=31)?dd:1;
}
void Date::Show() {
	cout<<year<<"-"<<month<<"-"<<day<<endl;
}
void Employee::Postion(char Depart[20],char  Name[20],Date bron,Position po,Date tdateofwork) {
	strcpy(m_depart,Depart);
	strcpy(m_name,Name);
	m_bron=bron;
	m_tdateofwork=tdateofwork;
}
void Employee::Show() {
	cout<<"Depart:"<<"  "<<m_depart<<endl;
	cout<<"Name:"<<"  "<<m_name<<endl;
	cout<<"Birthdate"<<" ";
	m_bron.Show();
	switch(m_po) {
		case MANAGER:
			cout<<"Position: "<<"MANAGER"<<endl;
			break;
		case ENGINEER:
			cout<<"Position: "<<"ENGINEER"<<endl;
			break;
		case EMPLOYEE:
			cout<<"Position: "<<"EMPOYEE"<<endl;
			break;
		case WORKER:
			cout<<"Position: "<<"WORKER"<<endl;
			break;
	}
	cout<<"Date of worker"<<"  ";
	m_tdateofwork.Show();
	cout<<"salary:"<<"  "<<getRealsalary()<<endl;
	cout<<"-----------------"<<endl;
}
main() {

	Employee em[2];
	Date birthdate,workdate;
	birthdate.init(1980,5,3);
	workdate.init(1999,7,20);
	em[0].Postion("工程部","张三",birthdate,ENGINEER,workdate);
	em[0].setSalary(1000,200,100,50,20);
	birthdate.init(1979,4,8);
	workdate.init(2002,3,1);
	em[1].Postion("售后服务部","李四",birthdate,MANAGER,workdate);
	em[1].setSalary(1500,200,150,50,20);
	for(int i=0; i<2; i++)
		em[i].Show();
}


