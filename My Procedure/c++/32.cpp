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
	cout<<"学生姓名"<<"  "<<name<<endl;
	cout<<"学生年龄"<<"  "<<age<<endl;
	cout<<"学生学号"<<"   "<<id<<endl;
	cout<<"学生成绩"<<"   "<<score<<endl;
	cout<<"学生性别"<<"   "<<sex<<endl;
}
main()
{
	int i;
	Student stu[3];
	stu[0].getName("何广达");
	stu[0].getAge(20);
	stu[0].getId("1542159214");
	stu[0].getScore(90);
	stu[0].getSex("男");
	stu[1].getName("夏志翔");
	stu[1].getAge(19);
	stu[1].getId("1542159239");
	stu[1].getScore(150);
	stu[1].getSex("男");
	stu[2].getName("周子瑜");
	stu[2].getAge(18);
	stu[2].getId("1542159250");
	stu[2].getScore(100);
	stu[2].getSex("男");
	 for(i=0;i<3;i++)
	 stu[i].Show();
}
