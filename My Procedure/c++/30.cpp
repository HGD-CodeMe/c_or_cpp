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
 	cout<<"���ѧ����������"<<" "<<name<<endl;
 	cout<<"ѧ������"<<" "<<age<<endl;
 	cout<<"ѧ���Ա�"<<" "<<sex<<endl;
 	cout<<"���ѧ���ĳɼ���"<<" "<<score<<endl;
 }
 main()
 {
 Student stu;
 stu.setName("�ι��"); 
 stu.setAge(20);
 stu.setScore(100);
 stu.setSex("��");
 stu.Show(); 
 }
