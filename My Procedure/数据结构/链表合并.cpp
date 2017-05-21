#include<iostream>
#include<cstdlib>
using namespace std;
class Node
{
public:
	int date;
	Node *next;
	void ShowNode();
};
class LinkList
{
public:
    LinkList();
    ~LinkList();
    void HeadInsertList();
	void TriInsertList();
	void InsertList();
	void DeleteList();
	void CreatList();
	void ShowList();
//private:
    int length;
    Node *m_pList;	
	
};
void Node::ShowNode()
{
	cout<<date<<"\t";
}
LinkList::LinkList()
{
	length=0;
	m_pList=new Node;//只要有申请空间的部分，就要判断其是否能申请得到
	m_pList->next=NULL;
	m_pList->date=0;
	
}
LinkList::~LinkList()
{
    delete m_pList;	
}
Node *p,*q;//这里为什么定义全局变量不会报错？
void LinkList::CreatList()
{
    p=m_pList;//申请结点的初始化
	//Node *q;
	int n,e;
	cout<<"please in LinkListlength:"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		q=new Node;//放在里面申请相当于申请了多个空间
		cout<<"please in put elem:"<<endl;
		cin>>e;
		q->date=e;
		p->next=q;
		//q->next=NULL;
		p=q;
		//q->next=NULL;//更换上一个结点，开始是头结点
		cout<<"Creat successful!"<<endl;
		length++;
	}
	p->next=NULL;
}
void LinkList::HeadInsertList()//头插思想没错，可能是输出语句出的问题导致数据倒序输出
{
	//Node *p;//申请头结点
	int e;
	Node *temp=m_pList->next;//为了后面赋值
	Node *newNode=new Node;//这里申请空间需要注意下，这部分有点不会
	cout<<"please in put List elem:"<<endl;
	cin>>e;
	newNode->date=e;
	m_pList->next=newNode;
	//m_pList=newNode;
	newNode->next=temp;//新的节点代替上一个节点
	length++;
	
}
void LinkList::InsertList()
{
	int i,e;
	Node *newNode=new Node;
	Node *currentNode=m_pList;//当前节点初始化，指向头结点
	cout<<"please in put Position:"<<endl;
	cin>>i;
	/* if(i<0||i>=length)//这里要加一个判断位置是否输入合理的语句
	{
		return false;
	} */
	while(i>length)
	{
	    cout<<"Position is over the Listlimit,please input new one:"<<endl;
		cin>>i;
		
	}
	cout<<"please in put elem:"<<endl;
	cin>>e;
	for(int k=0;k<i;k++)//找到插入位置
	{
		currentNode=currentNode->next;
	}
	newNode->date=e;
	newNode->next=currentNode->next;
	currentNode->next=newNode;
	length++;
}
void LinkList::DeleteList()
{
	cout<<"please input need delete Node position:"<<endl;
	int i;
	cin>>i;
	/* if(i<0||i>=length)//这里要加一个判断位置是否输入合理的语句
	{
		return false;
	} */
	Node *CurrentNode=m_pList;
	Node *CurrentNodeBefore;
	for(int n=0;n<i;n++)
	{
		CurrentNodeBefore=CurrentNode;//这一步我没想到,也是删除重要的一步
		CurrentNode=CurrentNode->next;
	}
	CurrentNodeBefore->next=CurrentNode->next;
	delete CurrentNode;
	CurrentNode=NULL;
	length--;
}
void LinkList::ShowList()
{
	Node *CurrentNode=m_pList;
	while(CurrentNode->next!=NULL)
	{
		CurrentNode=CurrentNode->next;
		CurrentNode->ShowNode();
		//cout<<CurrentNode->date<<"\t";这里运用这种方式不行？
	    //CurrentNode=m_pList->next;
	}
}
/* void LinkList::TriInsertList()
{
	int e;
	cout<<"please in put List elem:"<<endl;
	cin>>e;
	Node *CurrentNode=m_pList;
	while(CurrentNode->next!=NULL)
	{
		CurrentNode=CurrentNode->next;//这一步将表头指向了表尾，与尾插区别在此
	}
	Node *newNode=new Node;
	newNode->date=e;
	newNode->next=NULL;
	currentNode->next=newNode;
	length++;
} */
void MergeList(LinkList LA,LinkList LB,LinkList LC)//链表合并（申请一个空间）
{
	Node *pa,*pb,*pc;
	pa=LA.m_pList->next;//指向头结点
	pb=LB.m_pList->next;
	LC.m_pList=LA.m_pList;
	pc=LC.m_pList;
	while(pa&&pb)//A,B表均未到达表尾
	{
		if(pa->date<=pb->date)
		{
			pc->next=pa;
			pc=pa;
			pa=pa->next;
		}
		else
		{
			pc->next=pb;
			pc=pb;
			pb=pb->next;
		}
	}
	pc->next=pa?pa:pb; 
	delete LB.m_pList;//释放B的头结点
	cout<<endl;
	cout<<"combined List is :"<<endl;
	LC.ShowList();
}
void combineList(LinkList L1,LinkList L2)//链表合并，不申请另一个空间，第一种方法
{
	Node *pA=L1.m_pList->next;
	Node *pB=L2.m_pList->next;
	Node *newhead,*temp;
	if(pA->date<=pB->date)//找出新的头结点，这里是一个想法
	{
		newhead=pA;
		pA=pA->next;
	}
	else
	{
		newhead=pB;
		pB=pB->next;
		
	}
	temp=newhead;
	while(pA&&pB)
	{
		if(pA->date<=pB->date)//允许有重复数据
	    {
			temp->next=pA;
            pA=pA->next;
            temp=temp->next;
		}	
		else
		{
			temp->next=pB;
            pB=pB->next;
            temp=temp->next;
		}
	}
    temp->next=pA?pA:pB;//这样更好一点
	L1.m_pList=newhead;
	delete L2.m_pList;
}
void DeleteRepeat(LinkList L1)//删除重复数据节点
{
    Node *p=L1.m_pList->next;
	Node *q,*u,*y;
    while(p)
	{
		q=p;
		while(q)
		{
		   if(q->date==p->date)
		   {
			    u->next=q->next;
				y=q;
				free(y);
				q=q->next;
			   
		   }
		   else
		   {
			    u=q;
			    q=q->next;
		   }
		}
		u=p;
		p=p->next;
	}  

	/* Node *p,*q,*r;
    for(p=L1.m_pList->next;p!=NULL;p=p->next)
	{
		for(r=p,q=p->next;q!=NULL;q=q->next)
		{
  　		if(p->date==q->date)
			{
				r->next=q->next;
				free(r);
				q=r;
			}
			else 
				r=r->next;
		}
   }  */
	
} 
main()
{
	LinkList L1,L2;
	cout<<"please Creat LA:"<<endl;
	L1.CreatList();
	//cout<<"please Creat LB:"<<endl;
	//L2.CreatList();
	//cout<<"Elem1 is :"<<endl;
	L1.ShowList();
	//cout<<endl;
	//cout<<"Elem2 is :"<<endl;
	//L2.ShowList();
	//L1.DeleteList();	
   /* int m_length,n_length;
    cout<<"please in put List1 length:"<<endl;
	cin>>m_length;
	for(int i=0;i<m_length;i++)
	{
		LA.HeadInsertList();
	} 
    cout<<"please in put List2 length:"<<endl;
	cin>>n_length;
	for(int j=0;j<n_length;j++)
	{
		LB.HeadInsertList();
	}*/    
	//combineList(L1,L2); 
    //MergeList(LA,LB,LC);
	//LA.CreatList();
	DeleteRepeat(L1);
	cout<<endl;
	L1.ShowList();
//	LB.ShowList();//可不可以在外面这里输出LC？
	//cout<<"ok"<<endl;

}