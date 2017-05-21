#include<iostream>
using namespace std;
class Node
{ 
     public:
     	int data;
     	Node *next;
     	void printNode();
  
};
class List
{
	public:
		List();
		~List();
		void ClearList();
		bool ListEmpty();
		int ListLength();
		bool GetElem(int i,Node *pNode);
		int LocateElem(Node *pNode);
		bool PriorElem(Node *pCurrentNode,Node *pNextNode);
		bool NextElem(Node *pCurrentNode,Node *pNextNode);
		void ListTraverse();
		bool ListInsert(int i,Node *pNode);
		bool ListDelete(int i,Node *pNode);
        bool ListInsertHead(Node *pNode);
        bool ListInsertTail(Node *pNode);
    private:
    	Node *m_pList;
    	int m_iLength;
};
void Node::printNode()
{
	cout<<data<<endl;
}
List::List()
{
	m_pList=new Node;
	m_pList->data=0;
	m_pList->next=NULL;
	m_iLength=0;
}
List::~List()
{
	ClearList();
	delete m_pList;
	m_pList=NULL;
}
bool List::ListEmpty()
{
	if(m_iLength==0)
	   return true;
	else
	   return false;
}
int List::ListLength()
{
	return m_iLength;
}
void List::ClearList()
{
	Node *currentNode=m_pList->next;
	while(currentNode!=NULL)
	{
		Node *temp=currentNode->next;
		delete currentNode;
		currentNode=temp;
	}
	m_pList->next=NULL;
}
bool List::ListInsertHead(Node *pNode)
{
	Node *temp=m_pList->next;
	Node *newNode=new Node;
	if(newNode==NULL)
	{
		return false;
	}
	newNode->data=pNode->data;
	m_pList->next=newNode;
	newNode->next=temp;
	m_iLength++;
	return true;
}
bool List::ListInsertTail(Node *pNode)
{
	Node *currentNode=m_pList;
	while(currentNode->next!=NULL)
	{
		currentNode=currentNode->next;
	}
	Node *newNode=new Node;
	{
		if(newNode==NULL)
		{
			return false;
		}
		newNode->data=pNode->data;
		newNode->next=NULL;
		currentNode->next=newNode;
		m_iLength++;//这里需要思考 
		return true;
	}
}
bool List::ListInsert(int i,Node *pNode)
{
	if(i<0||i>m_iLength)
	{
		return false;
	}
	Node *currentNode=m_pList;
	for(int k=0;k<i;k++)
	{
		currentNode=currentNode->next;
	}
	Node *newNode=new Node;
	if(newNode==NULL)
	{
		return false;
	}
	newNode->data=pNode->data;
	newNode->next=currentNode->next;
	currentNode->next=newNode;
	m_iLength++;
	return true;
}
bool List::ListDelete(int i,Node *pNode)
{
	if(i<0||i>=m_iLength)
	{
		return false;
	}
	Node *currentNode=m_pList;
	Node *currentNodeBefore=NULL;
	for(int k=0;k<=i;k++)
	{
		currentNodeBefore=currentNode;
		currentNode=currentNode->next;
	}
	currentNodeBefore->next=currentNode->next;
	pNode->data=currentNode->data;
	delete currentNode;
	currentNode=NULL;
	m_iLength--;
	return true;
}
bool List::GetElem(int i,Node *pNode)
{
	if(i<0||i>=m_iLength)
	{
		return false;
	}
	Node *currentNode=m_pList;
	Node *currentNodeBefore=NULL;
	for(int k=0;k<=i;k++)
	{
		currentNodeBefore=currentNode;
		currentNode=currentNode->next;
	}
	pNode->data=currentNode->data;
	return true;
}
int List::LocateElem(Node *pNode)
{
	Node *currentNode=m_pList;
	int count=0;
	while(currentNode->next!=NULL)
	{
		currentNode=currentNode->next;
		if(currentNode->data==pNode->data)
		{
			return count;
		}
		count++;
	}
	return -1;
}
bool List::PriorElem(Node *pCurrentNode,Node *pPreNode)
{
	Node *currentNode=m_pList;
	Node *tempNode=NULL;
	while(currentNode->next!=NULL)
	{
		tempNode=currentNode;
		currentNode=currentNode->next;
		if(currentNode->data==pCurrentNode->data)
		{
			if(tempNode==m_pList)
			{
				return false;
			}
			pPreNode->data=tempNode->data;
			return true;
		}
	}
	return false;
}
bool List::NextElem(Node *pCurrentNode,Node *pNextNode)
{
	Node *currentNode=m_pList;
	while(currentNode->next!=NULL)
	{
		currentNode=currentNode->next;
		if(currentNode->data==pCurrentNode->data)
		{
			if(currentNode->next==NULL)
			{
				return false;
			}
			pNextNode->data=currentNode->next->data;
			return true;
		}
	}
}
void List::ListTraverse()
{
	Node *currentNode=m_pList;
	while(currentNode->next!=NULL)
	{
		currentNode=currentNode->next;
		currentNode->printNode();
	}
}
main()
{
	Node node1;
	node1.data=3;
	Node node2;
	node2.data=4;
	Node node3;
	node3.data=5;
	Node node4;
	node4.data=6;
	Node node5;
	node5.data=7;
	Node temp;
	List *pList=new List();
	pList->ListInsertTail(&node1);
	pList->ListInsertTail(&node2);
	pList->ListInsertTail(&node3);
	pList->ListInsertTail(&node4);
	
	pList->ListInsert(1,&node5);
	
	pList->ListDelete(1,&temp);
	
	pList->ListTraverse();
	//pList->GetElem(0,&temp);
	cout<<endl;
	
	cout<<"temp="<<temp.data<<endl;
	delete pList;
	pList=NULL;
}
