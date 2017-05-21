#include<iostream.h>
#include"Student.h"
void Student::Register(char * m_name,char * m_number,int m_ascore,int n_ascore,int p_ascore)
{
	Score sc;
	name=m_name;
	number=m_number;
	sc.computer=m_ascore;
	sc.english=n_ascore;
	sc.mathematics=p_ascore;
}
void Student::print()
{
	Score sc;
	int i;
	cout<<"学号"<<"姓名"<<"计算机"<<"英语"<<"数学"<<"总分"<<endl;
	cout<<number<<name<<sc.computer<<sc.english<<sc.mathematics<<sc.sum()<<endl;
}
//void Student::modify(char * n_number,char * n_name,Score sc)

