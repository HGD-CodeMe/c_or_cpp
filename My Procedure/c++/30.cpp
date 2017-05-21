#include<iostream>
#include<string>
using namespace std;
class  Student
{
	public:
		void setName(char a[5]);
		void setAge(int b);
		void setSex(char c[5]);
		void setScore(int d);
		void Show();
		private:
			int age,score;
			string name,sex;
 } ;
 void Student::setName(char a[5])
 {
 	name=a;
 }
 void Student::setAge(int b)
 {
 	age=b;
 }
 void Student::setScore(int c)
 {
 	score=c;
 }
 void Student::setSex(char d[5])
 {
 	sex=d; 
 }
 void Student::Show()
 {
 	cout<<"这个学生的名字是"<<" "<<name<<endl;
 	cout<<"学生年龄"<<" "<<age<<endl;
 	cout<<"学生性别"<<" "<<sex<<endl;
 	cout<<"这个学生的成绩是"<<" "<<score<<endl;
 }
 main()
 {
 Student stu;
 stu.setName("何广达"); 
 stu.setAge(20);
 stu.setScore(100);
 stu.setSex("男");
 stu.Show(); 
 }
