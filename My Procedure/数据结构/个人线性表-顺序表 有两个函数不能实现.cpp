#include<iostream>
using namespace std;
class List
{
	public:
	    List(int size);//����һ���յ�˳���б� 
	    ~List();
	    void ClearList();
	    bool ListEmpty();
	    int ListLength();
	    int LocateElem(int *e);//���ص������ݵ�λ�� 
	    bool GetElem(int i,int *e);
	    bool PriorElem(int *currentElem,int *preElem);//������������º��������� 
	    bool NextElem(int *currentElem,int *nextElem);
	    bool ListInsert(int i,int *e); 
        bool ListDelete(int i,int *e);
        void ListTraverse();
    private:
        int m_iSize;
        int *m_pList;       //ä�� 
        int m_iLength;      //���г��� 
};
List::List(int size)
{
	m_iSize=size;
	m_pList=new int[m_iSize]; //Ϊ�������һ��size��С�Ŀռ� 
	m_iLength=0;
}
List::~List()
{
	delete []m_pList;
	m_pList=NULL;
}
void List::ClearList()
{
	m_iLength=0;
}
bool List::ListEmpty()
{
	if(m_iLength==0)
	{
		return true;
	}
	return false;
}
int List::ListLength()
{
	return m_iLength;
}
bool List::GetElem(int i,int *e)
{
	if(i<0||i>=m_iSize)
	{
		return false;
	}
	*e=m_pList[i];
	return true;
}
int List::LocateElem(int *e)
{
	for(int i=0;i<m_iLength;i++)
	{
		if(m_pList[i]==*e)
		{
			return i;
		}
		return -1;
	}
}
bool List::PriorElem(int *currentElem,int *preElem)
{
	int temp=LocateElem(currentElem);
	if(temp==-1)
	{
		return false;
	}
	else
	{
		if(temp==0)
		{
			return false;
		}
		else
		{
			*preElem=m_pList[temp-1];
			return true;
		}
	}
}
bool List::NextElem(int *currentElem,int *nextElem)
{
	int temp=LocateElem(currentElem);//������ֿ��� 
	if(temp==-1)
	{
		return false;
	}
	else
	{
		if(temp==m_iLength-1)
		{
			return false;
		}
		else
		{
			*nextElem=m_pList[temp+1];
			return true;
		}
	}
}
void List::ListTraverse()
{
	for(int i=0;i<m_iLength;i++)
	{
		cout<<m_pList[i]<<endl;
	}
}
bool List::ListInsert(int i,int *e)
{
	if(i<0||i>m_iLength)
	{
		return false;
	}
	for(int k=m_iLength-1;k>=i;k--)//������Կ��ǽ�ͷ��ǰ���� 
	{
		m_pList[k+1]=m_pList[k];
	}
	m_pList[i]=*e;
	m_iLength++;
	return true;
}
bool List::ListDelete(int i,int *e)
{
	if(i<0||i>=m_iLength)
	{
	return false;
    }
    *e=m_pList[i];
    for(int k=i+1;k<m_iLength;k++)
    {
    	m_pList[k-1]=m_pList[k];
    }
    m_iLength--;
    return true;
}
main()
{
	int e1=1;
	int e2=2;
	int e3=3;
	int e4=4;
	int e5=5;
	int e6=6;
	int e7=7;
	int temp1=8;
	List *list1=new List(10);//ä�� 
	list1->ListInsert(0,&e1);
	list1->ListInsert(1,&e2);
	list1->ListInsert(2,&e3);
	list1->ListInsert(3,&e4);
	list1->ListInsert(4,&e5);
	list1->ListInsert(5,&e6);
	list1->ListInsert(6,&e7);
	//list1->ListDelete(3,&e4);
	//list1->GetElem(2,&temp);
	list1->ListTraverse();
	cout<<endl;
	//list1->NextElem(&e4,&temp1);
	list1->PriorElem(&e4,&temp1);
	cout<<"#"<<temp1<<endl;
	
	delete list1;
	list1=NULL;
}

