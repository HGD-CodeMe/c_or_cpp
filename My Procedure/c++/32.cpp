#include<iostream>
#include<string>
using namespace std;
class Student
{
	public:
		void getName(string a);
		void getAge(int b);
		void getId(string c);
		void getSex(string d);
		void getScore(int e);
		void Show();
		private:
			int age,score;
			string name,sex,id;
};
void Student::getName(string a)
{
	name=a;
}
void Student::getAge(int b)
{
	age=b;
}
void Student::getId(string c)
{
	id=c;
}
void Student::getScore(int e)
{
	score=e;
}
void Student::getSex(string d)
{
	sex=d;
}
void Student::Show()
{
	cout<<"ѧ������"<<"  "<<name<<endl;
	cout<<"ѧ������"<<"  "<<age<<endl;
	cout<<"ѧ��ѧ��"<<"   "<<id<<endl;
	cout<<"ѧ���ɼ�"<<"   "<<score<<endl;
	cout<<"ѧ���Ա�"<<"   "<<sex<<endl;
}
main()
{
	int i;
	Student stu[3];
	stu[0].getName("�ι��");
	stu[0].getAge(20);
	stu[0].getId("1542159214");
	stu[0].getScore(90);
	stu[0].getSex("��");
	stu[1].getName("��־��");
	stu[1].getAge(19);
	stu[1].getId("1542159239");
	stu[1].getScore(150);
	stu[1].getSex("��");
	stu[2].getName("�����");
	stu[2].getAge(18);
	stu[2].getId("1542159250");
	stu[2].getScore(100);
	stu[2].getSex("��");
	 for(i=0;i<3;i++)
	 stu[i].Show();
}
