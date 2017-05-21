#include<iostream>//对象作为函数的参数和返回值 
#include<string>
#include<iomanip>
using namespace std;
class Student 
{
	public:
	void getName(char a[5]);
	void getAge(int b);
	void getSex(char c[5]);
	int  getScore();
	void show();
	private:
		string name,sex;
		int age,score;
};
void Student::getName(char a[5])
{
	name=a;
}
void Student::getAge(int b)
{
	age=b;
}
void Student::getSex(char c[5])
{
	sex=c;
}
int Student::getScore()
{
	score=age*2;
	return score;
}
void Student::show()
{
	cout<<"学生姓名"<<"   "<<name<<endl;
	cout<<"学生年龄"<<setw(5)<<age<<endl;
	cout<<"学生性别"<<setw(5)<<sex<<endl;
	cout<<"学生成绩"<<setw(5)<<score<<endl; 
}
Student&compare(Student & t1,Student & t2)
{
	if(t1.getScore() > t2.getScore())
	return t1;
	else
	return t2;
 } 
 main()
 {
 	Student t1,t2;
 	t1.getAge(20);
 	t1.getName("何广达");
	t1.getScore();
	t1.getSex("男");
	t2.getAge(21);
	t2.getName("夏志翔"); 
	t2.getSex("男");
	t2.getScore();
	Student&max=compare(t1,t2);
	max.show();
 }
