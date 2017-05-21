#include<iostream>
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
	
}
LinkList::~LinkList()
{
    delete m_pList;	
}
void LinkList::CreatList()
{
    Node *P=m_pList;//申请结点的初始化
	Node *q;
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
	}
	m_pList->next=NULL;
	
}
void LinkList::HeadInsertList()
{
	//Node *p;//申请头结点
	int e;
	Node *temp=m_pList->next;//这里为什么要这样附一个值？
	Node *newNode=new Node;//这里申请空间需要注意下，这部分有点不会
	cout<<"please in put List elem:"<<endl;
	cin>>e;
	newNode->date=e;
	m_pList->next=newNode;
	newNode->next=temp;//为什么这一步？
	length++;
	
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
/* void MergeList(LinkList LA,LinkList LB,LinkList LC)
{
	Node *pa,*pb,*pc;
	pa=LA.m_pList;//指向头结点
	pb=LB.m_pList;
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
	pc->next=pa?:pb; 
	//LB=NULL;
}*/
/* void combineList(LinkList L1,LinkList L2)
{
	Node *temp1=L1.m_pList->next;
	Node *temp2=L2.m_pList->next;
	while(L1.m_pList->next!=NULL && L2.m_pList->next!=NULL)
	{
		if(L1.m_pList->date>L2.m_pList->date)
	    {
			L1.m_pList=L2.m_pList->next;
		    L1.m_pList->next=temp1;
	    }
		else
		{
			L2.m_pList->next=L1.m_pList;
			L1.m_pList->next=temp2;
		}
		
		
	}
	
} */
main()
{
	LinkList LA,LB,LC;
	 /* int m_length,n_length;
	cout<<"please in put List1 length:"<<endl;
	cin>>m_length;
	for(int i=0;i<m_length;i++)
	{
		LA.HeadInsertList();
	} */
	/* cout<<"please in put List2 length:"<<endl;
	cin>>n_length;
	for(int i=0;i<n_length;i++)
	{
		LB.HeadInsertList();
	}  */
	/* combineList(L1,L2);
	cout<<"Elem1 is :"<<endl;
	L1.ShowList();
	cout<<"Elem2 is :"<<endl;
	L2.ShowList(); */
	// MergeList(LA,LB,LC);
	LA.CreatList();
	LA.ShowList();

}
