#include<iostream>
using namespace  std;
class MyQueue
{
	public:
		MyQueue(int queueCapactiy); //�������� 
		virtual ~MyQueue();         //���ٶ��� 
		void ClearQueue();          //��ն���
		bool QueueFull()const;      //�ж϶����Ƿ�Ϊ�� 
		bool QueueEmpty()const;     //�пն��� 
		bool EnQueue(int element);  //��Ԫ����� 
		int QueueLength()const;     //���г��� 
		bool DeQueue(int &element); //��Ԫ�س��� 
		void QueueTraver();         //�������� 
	private:
		int *m_pQueue;              //��������ָ�� 
		int m_iQueueLen;            //����Ԫ�ظ��� 
		int m_iQueueCapacity;       //������������ 
		int m_iHead;
		int m_iTail;
		
};
MyQueue::MyQueue(int queueCapacity)
{
	m_iQueueCapacity=queueCapacity;
	m_pQueue=new int[m_iQueueCapacity];
	ClearQueue();
}
MyQueue::~MyQueue()
{
	delete []m_pQueue;
	m_pQueue=NULL;
}
void MyQueue::ClearQueue()
{
	m_iHead=0;
	m_iTail=0;
	m_iQueueLen=0;
}
bool MyQueue::QueueEmpty()const
{
	if(m_iQueueLen==0)
	
		return true;
	else
		return false;
	
}
bool MyQueue::QueueFull()const
{
	if (m_iQueueLen==m_iQueueCapacity)
	{
		return true;
	}
	    return false;
}
bool MyQueue::EnQueue(int element)
{
	if(QueueFull())
	{
		return false;
	}
	else
	{
		m_pQueue[m_iTail]=element;
		m_iTail++;
		m_iTail=m_iTail%m_iQueueCapacity;
		m_iQueueLen++;
		return true;
	}
}
bool MyQueue::DeQueue(int & element)
{
	if(QueueEmpty())
	{
		return false;
	}
	else
	{
	    element=m_pQueue[m_iHead];
	    m_iHead++;
	    m_iHead=m_iHead%m_iQueueCapacity;
	    m_iQueueLen--;
	    return true;  
	}
}
void MyQueue::QueueTraver()
{
	for(int i=m_iHead;i<m_iQueueLen+m_iHead;i++)
	{
		cout<<m_pQueue[i%m_iQueueCapacity]<<endl;
	}
}
main()
{
	MyQueue *p= new MyQueue(4);
	p->EnQueue(10);
	p->EnQueue(12);
	p->EnQueue(16);
	p->EnQueue(18);
	p->QueueTraver();


	int e=0;
	p->DeQueue(e);
	cout<<endl;
	cout<<e<<endl;
	
	p->DeQueue(e);
	cout<<endl;
	cout<<e<<endl;
	
	cout<<endl;
	p->QueueTraver();
	
	p->ClearQueue();
	p->QueueTraver();
	
	cout<<endl;
	p->EnQueue(20);
	p->EnQueue(30);
	p->QueueTraver();
	
	cout<<endl;
	p->ClearQueue();
	p->EnQueue(2008);
	p->QueueTraver();
	
	delete p;
	p=NULL;
}

