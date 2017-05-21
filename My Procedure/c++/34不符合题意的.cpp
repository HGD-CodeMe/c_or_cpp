#include<iostream>
#include<string.h>
using namespace std;
class Score
{
	public:
	//	Score();
	//	Score(int a,int b,int c);
		int sum();
		void modify(int a,int b,int c);
		void print();
	public:
	int computer,english,mathematics;
};
class Student
{
	char number[10];
	char name[10];
	public:
		Score sc;
	//	Student();
	//	Student(int a);
		void setiformation(char n_name[10],char n_number[10]);
		void acore(int com,int eng,int math);
	//	void getsum();
		void print1();
		int Sum;
		void print();
		//void modify(char m_name,char m_number b,int c);
};
int Score::sum()
{
	return computer+english+mathematics;
}
void Student::setiformation(char n_name[10],char n_number[10])
{
	strcpy(name,n_name);
	strcpy(number,n_number);
}
void Student::acore(int com,int eng,int math)
{
	sc.computer=com;
	sc.english=eng;
	sc.mathematics=math;	
}
void Student::print1()
{
	cout<<"学号  "<<"姓名  "<<"计算机  "<<"英语   "<<"数学   "<<"总分  "<<endl; 
	//cout<<number  <<name   <<sc.computer<<sc.english<<sc.mathematics<<sc.sum();
}
void Student::print()
{
   cout<<number  <<name   <<sc.computer<<sc.english<<sc.mathematics<<sc.sum();	
}
void Score::modify(int a,int b,int c)
{
	computer=a;
	english=b;
	mathematics=c;
}
main()
{
  Student stu[2];
  stu[0].setiformation("0101","aaaa");
  stu[0].acore(60,60,60);
  stu[1].setiformation("0102","bbbb");
  stu[1].acore(70,70,70);
  stu[0].print();
  for(int i=0;i<2;i++)
  stu[i].print1();
}
