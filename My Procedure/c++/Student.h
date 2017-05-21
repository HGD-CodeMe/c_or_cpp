#include"Score.h"
class Student
#include<string>
{
	Score sc;
	public:
		//Student();
		//Student(char * m_name,char * m_number,Score sc);
		void Register(char * m_name,char * m_number,int m_ascore,int n_ascore,int p_ascore);
		void sum();
		void modify(char * n_name,char * n_number,Score sc);
		void print();  
	public:
		//string name;
		//string number;
		char * number;
		char * name;
		int ascore;
};
