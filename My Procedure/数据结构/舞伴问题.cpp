#include<iostream>
#include<string> 
//#include<ostream>
using namespace std;
class Person
{
	friend ostream &operator<<(ostream &out,Person &person);
public:
	string name;
	string sex;//'F'代表女性，'M'代表男性
	Person &operator=(Person &person);//这些链式存储可能用到 
	bool operator==(Person &person);
	//Person(string name="",string sex="");
	void print();
	//Person(); 
};
/*Person::Person(string name,string sex)
{
	this->name=name;
	this->sex=sex;
}*/
void Person::print()
{
	cout<<"dancer name:"<<name<<endl;
	cout<<"dancer sex:"<<sex<<endl;
}
Person &Person::operator=(Person &person)
{
	this->name=person.name;
	this->sex=person.sex;
	return *this;
}
ostream &operator<<(ostream &out,Person &person)
{
	out<<person.name<<"----"<<person.sex<<endl;
	return out;
}
bool Person::operator==(Person &person)
{
	if(this->sex==person.sex)
	{
		return true;
	}
	return false;
}

class FQueue
{
public:
	FQueue();
	~FQueue();
	void FenQueue(Person person);
	void FdeQueue(Person &person);
	bool FQueueFull()const;//为什么加const？ 
	bool FQueueEmpty()const;
	int f_length;
private:
	//FQueue *f_Q;//队头指针 
	Person *f_base;
	int f_front;
	int f_rear;
 };
class MQueue
{
public:
	MQueue();
	~MQueue();
	void MenQueue(Person person);
	void MdeQueue(Person &person);
	bool MQueueFull()const;//为什么加const？ 
	bool MQueueEmpty()const;
	int m_length;
private:
	//MQueue *m_Q;//队头指针 
	Person *m_base;
	int m_front;
	int m_rear;
 };  
 MQueue::MQueue()
 {
 	m_base=new Person[100];//这一部分好弱 
 	//if(dancer==NULL)先假设能申请到
	m_rear=m_front=0;
	m_length=0; 
 }
 MQueue::~MQueue()
 {
 	delete[] m_base;
 	m_rear=m_front=0;
 }
 bool MQueue::MQueueFull()const
 {
 	if(m_length==100)
 	   return true;
 	else
	   return false;   
 }
 bool MQueue::MQueueEmpty()const
 {
 	if(m_length==0)
 		return true;
	else
	    return false; 
 }
 void MQueue::MenQueue(Person person)
 {
 	if(MQueueFull())
 	   cout<<"Queue is full!"<<endl;
 	else
		//if(person.sex=="M")
	 	m_base[m_rear]=person;
	 	//m_base[m_rear]=person.sex;
	 	m_rear++;
	 	m_rear=m_rear%100;
	 	m_length++;
	 	cout<<"Join successful! "<<endl;		  
}
 void MQueue::MdeQueue(Person &person)
 {
 	if(MQueueEmpty())
 		cout<<"Queue is empty!"<<endl;
 	else
	    person=m_base[m_front];
	    m_front++;
	    m_front=m_front%100;
	    m_length--;
	    person.print();
	    cout<<"Go out successful!"<<endl;
 }
 FQueue::FQueue()
 {
 	f_base=new Person[100];//这一部分好弱 
 	//if(dancer==NULL)先假设能申请到
	f_rear=f_front=0;
	f_length==0; 
 }
 FQueue::~FQueue()
 {
 	delete[] f_base;
 	f_rear=f_front=0;
 }
 bool FQueue::FQueueFull()const
 {
 	if(f_length==100)
 	   return true;
 	else
	   return false;   
 }
 bool FQueue::FQueueEmpty()const
 {
 	if(f_length==0)
 		return true;
	else
	    return false; 
 }
 void FQueue::FenQueue(Person person)
 {
 	if(FQueueFull())
 	   cout<<"Queue is full!"<<endl;
 	else
	    
		    //if(dancer[j].sex=='F') 
	 	    f_base[f_rear]=person;
	 	    f_rear++;
	 	    f_rear=f_rear%100;
	 	    f_length++;
	 	    cout<<"Join successful! "<<endl;
		   
}
 void FQueue::FdeQueue(Person &person)
 {
 	if(FQueueEmpty())
 		cout<<"Queue is empty!"<<endl;
 	else
 	    
		 	person=f_base[f_front];
	        f_front++;
	        f_front=f_front%100;
	        person.print();
	        f_length--;
	        cout<<"Go out successful!"<<endl;
	  
 }
 main()
 {
 	MQueue m_q;
 	FQueue f_q;
 	int num,count=0;
 	Person person;
 	cout<<"please input join the party person total  number："<<endl;
	cin>>num;//这里需要一个判断，只有用户输入数字时才有效； 
	for(int i=0;i<num;i++)
	{
		cout<<"please input dancer name："<<endl;
		cin>>person.name;
		cout<<"please input dancer  sex(F or M )"<<endl;
		cin>>person.sex;
		if(person.sex=="M")//应该是这个地方有问题？ 
		   m_q.MenQueue(person);
		else
		   f_q.FenQueue(person);
	}
	 /*cout<<"M:"<<endl;
	 m_q.MdeQueue(person);
	 cout<<"F:"<<endl;
	f_q.FdeQueue(person);*/
	
	while((m_q.m_length!=0)&&(f_q.f_length!=0))//这里存在一个c++ 与 运算符短路问题
	//while(f_q.f_length!=0) 
	{
	   count++;
	   cout<<"The  "<<count<<"  dancer partner is:"<<endl;   
	   m_q.MdeQueue(person);
	   f_q.FdeQueue(person);
    }
	if(f_q.f_length==0)
	{
		cout<<"The first women to get a partner is:"<<endl;
		m_q.MdeQueue(person);
	}
    else
	{
		cout<<"The first man to get a partner is:"<<endl;
		f_q.FdeQueue(person);	
	}

 }
 
