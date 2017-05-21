#include<iostream>
using namespace std;
class LNode
{
public:
	int data;
	int *p_next;
 };
class LinkList
{
public:
    LinkList();
    ~LinkList();
	void listInsert();
	bool listDelete();
private:
	int m_length;
	LNode *p;	
};
LinkList::LinkList()
{
	p.p_next=NULL;
	m_length=0;
}
LinkList::~LinkList() 
{
	LNode *q;
    while(p.p_next!=NULL)
    {
    	q=p.p_next;
    	q=NULL;
	}
}
void LinkList::listInsert()
{
	int i,e;
	LNode *q;
    cout<<"please input position and data:"<<endl;
	cin>>i>>e;
		
}  
