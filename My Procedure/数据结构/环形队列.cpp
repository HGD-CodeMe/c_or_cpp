#include<iostream>
using namespace  std;
class MyQueue
{
	public:
		MyQueue(int queueCapactiy); //创建队列 
		virtual ~MyQueue();         //销毁队列 
		void ClearQueue();          //清空队列
		bool QueueFull()const;      //判断队列是否为满 
		bool QueueEmpty()const;     //判空队列 
		bool EnQueue(int element);  //新元素入队 
		int QueueLength()const;     //队列长度 
		bool DeQueue(int &element); //首元素出列 
		void QueueTraver();         //遍历队列 
	private:
		int *m_pQueue;              //队列数组指针 
		int m_iQueueLen;            //队列元素个数 
		int m_iQueueCapacity;       //队列数组容量 
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

