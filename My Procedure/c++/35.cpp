#include<iostream>
using namespace std;//�˳������������Ա�Ĵ��� ��������ַ��ڳ�����ת�������ֽ��������ж� ��������ʹ�� 
#include<string.h>
class Person
{
	public:
		char name[20];
		int  age;
		int  sex;
	public:
		void Register(char * m_name,int m_age,char m_sex)
            {
	            strcpy(name,m_name);
	            age=m_age;
	            sex=(m_sex=='m'?0:1);
            }
		char * Getname()
		{
			return name;
		}
		int  Getage()
		{
			return age;
		}
		char  Getsex()
		{
			return sex==0?'m':'f';
		}
      void Showme()
           {
	            cout<<Getname()<<"\t"<<Getsex()<<"\t"<<Getage()<<"\t"<<endl;
           }
};
class Employee:public Person
{
	public:
	char Depart[20];
	int salary;
	public:
		Employee()
	{
	      EmployeeRgister("XXX",0,'m',"XXX",0);
	}
		void EmployeeRgister(char * m_name,int m_age,int m_sex,char * m_Depart,int m_salary);
		void ShowMe();
};
void Employee::EmployeeRgister(char * m_name,int m_age,int m_sex,char * m_Depart,int m_salary)
{
	Register(m_name,m_age,m_sex);
      strcpy(Depart,m_Depart);
	salary=m_salary;
}
void Employee::ShowMe()
{
	cout<<Getname()<<"\t"<<Getsex()<<"\t"<<Getage()<<"\t";
	cout<<Depart<<"\t"<<salary<<"\t"<<endl;
	cout<<name<<endl;		
}
main()
{
	Employee em;
	em.ShowMe();
	em.EmployeeRgister("����",40,'f',"ͼ���",2000);
	em.ShowMe();
	em.Person::Showme();
	cout<<"���û��� Getname()����ֵΪ��"<<em.Getname()<<endl;
}
