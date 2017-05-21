#include<iostream>
#include<string.h> 
using namespace std;
class Student
{
	public:
	    char number[20];
	    char sex[20];
	    int m_sex;
	    static int total;
	    static int m_total;
	    static int f_total;
	public:
	    string GetNum();
	    char GetSex();
	    static int GetC();
	    static void Get();
          Student(char n_sex);
          ~Student();
 };
 Student::Student(char n_sex)
 {
 	m_sex=(n_sex=='m'?0:1);
 	if(m_sex==0)
	m_total++;
 	else
 	f_total++;
      
 }
 Student::~Student()
 {	
 }
 int Student::GetC()
 {
 	return m_total+f_total;
 }
 void Student::Get()
 {
 	cout<<"其中男生有："<<m_total<<endl;
	cout<<"女生有："<<f_total<<endl; 
 }
  string Student::GetNum()
 {
     string str1="1001";
     string str2="1002";
     if(m_sex==0)
     return str1;
     else 
     return str2; 
 }
 char Student::GetSex()
 {
     return m_sex==0?'m':'f';  
 }
 int Student::total=0;
 int Student::m_total=0;
 int Student::f_total=0;
 main()
 {
 	cout<<"当前班级的总人数："<<Student::GetC()<<endl;
 	Student::Get();
 	cout<<endl;
 	Student a('m');
 	cout<<"该班级当前学生总数："<<a.GetC()<<endl;
 	a.Get();
 	cout<<endl;
 	cout<<"学号为"<<a.GetNum()<<"学生性别为："<<a.GetSex()<<endl;
	Student b('f');
	cout<<"当前班级的总人数为："<<a.GetC()<<endl;
	a.Get();
	cout<<"学号为"<<b.GetNum()<<"的学生性别为："<<b.GetSex()<<endl;
  } 
