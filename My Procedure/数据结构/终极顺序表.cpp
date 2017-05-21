#include<iostream>
using namespace std;
class SqList
{
public:
	//List();
	~SqList();
	void creatList();
	bool insertList();
	bool deleteList();
	void clearList();
	//int listLength();
	void getElem();
	void locateElem();
	void priorElem();
	void nextElem();
	void TraverseList();
private:
	int length;
	int size;
	int *elem;
		
};
void  SqList::creatList()
{
	elem=new int[100];//��һ���д����ƣ�ͨ���ֶ�����,��һ���ֻ����� 
	if(elem!=NULL)
	{ 
	   cout<<"Input Sqlist length:"<<endl;
	   int Size;
	   cin>>Size;
	   length=Size;
	   cout<<"Input Sqlist elem:"<<endl;
	   for(int i=0;i<length;i++)
	      {
		   cin>>elem[i];
	      }
	      cout<<"CreatList Sucessful��"<<endl;
	}
	else
	{
		cout<<"CreatList Fail��"<<endl; 
	}
}
void SqList::clearList()
{
	length=0;
}
SqList::~SqList()
{
	elem=NULL;
	delete[] elem;
}
bool SqList::insertList()
{
	int i,e;
 	cout<<"please  input position and elem:"<<endl;
 	cin>>i>>e;
	if(i<0||i>length)
	{
		cout<<"input error,please input new postion"<<endl;
		return false;
	}
	else
	{
		for(int k=length;k>=i-1;k--)//ע������Ӻ��濪ʼ�� 
		{
			elem[k+1]=elem[k];
		}
		elem[i]=e;
		length++;
		cout<<"Insert successful!"<<endl;
		return true;
	}
}
bool SqList::deleteList()//����ֱ�Ӹ��ǵ�ԭ����Ԫ��,�е�û���� 
{
	int i;
	cout<<"please  input position:"<<endl;
	cin>>i;
	if(i<0||i>=length)
	{
		cout<<"input error,please input new postion"<<endl;
		return false;
	}
	else
	{
			for(int k=i+1;k<length;k++)
		{
			elem[k-1]=elem[k];
		}
	    length--;
	    cout<<"delete sucessful!"<<endl;
		return true;
	}
}
void SqList::locateElem()
{
	int e;
	int i;
	cout<<"please input a elem"<<endl;
	cin>>e;
	for(int i=0;i<=length;i++)//���ѭ��������
	{
	    if(elem[i]==e)
		{
		   cout<<"Elem finded! "<<endl;
		   cout<<"The elem position is: "<<i+1<<endl;break;
	    }
	    if(i==length)
	    {
	    	cout<<"The elem can't find!"<<endl;break;
		}
	}
}
void SqList::getElem()
{
	int i;
	cout<<"please  input position:"<<endl;
	cin>>i;
	if(i<0||i>length)
	{
		cout<<"input error,please input new postion"<<endl;
	}
	cout<<"The elem is:"<<elem[i-1]<<endl;
}
void SqList::priorElem()
{
	int e;
	cout<<"please input a elem"<<endl;
	cin>>e;
	for(int i=0;i<=length;i++)
	{
		if(elem[i]==e&&i!=0)
		{
		    cout<<"The elem is:"<<elem[i-1]<<endl;break;
		}
		if(i==length&&i!=0)
		{
			cout<<"The elem have no priorelem!"<<endl;break;
		}
	}
}
void SqList::nextElem()
{
	int e;
	cout<<"please input a elem"<<endl;
	cin>>e;
	for(int i=0;i<=length;i++)
	{
		if(elem[i]==e&&i!=length)
		{
			cout<<"The elem is:"<<elem[i+1]<<endl;break;
		}
		if(i==length&&i==length)
		{
			cout<<"The elem have no nextelem!"<<endl;break;
		}
	}
}
void SqList::TraverseList()
{
	cout<<"The Sqlist elem is"<<endl;
	for(int i=0;i<length;i++)
	{
		cout<<elem[i]<<'\t';
		cout<<endl;
	}
}
main()
{
	int f;
	SqList  L;
	L.creatList();//���������ʽ���ÿ� 
	cout<<"����������Ա�Ĳ������˳��밴 0��"<<endl;
	cout<<"1-������Ԫ��,\t       ,2-ɾ��Ԫ��"<<endl<<endl;
	cout<<"3-�������Ա�,\t       ,4-������Ԫ���Ƿ������Ա���"<<endl<<endl;
	cout<<"5-���Ҵ�Ԫ�ص�ǰ��,\t ,6-���Ҵ�Ԫ�صĺ��"<<endl<<endl;
	cout<<"7-���Ҵ�λ�õ�Ԫ��"<<endl;
	cin>>f;
	while(f!=0)
	{
		switch(f)
		{
			case 1:	L.insertList();break;
			case 2: L.deleteList();break;
			case 3: L.TraverseList();break;
			case 4: L.locateElem();break;
			case 5: L.priorElem();break;
			case 6: L.nextElem();break;
			case 7:	L.getElem();break;
		}
	cout<<"����������Ա�Ĳ������˳��밴 0��"<<endl;
	cout<<"1-������Ԫ��,\t       ,2-ɾ��Ԫ��"<<endl<<endl;
	cout<<"3-�������Ա�,\t       ,4-������Ԫ���Ƿ������Ա���"<<endl<<endl;
	cout<<"5-���Ҵ�Ԫ�ص�ǰ��,\t ,6-���Ҵ�Ԫ�صĺ��"<<endl<<endl;
	cout<<"7-���Ҵ�λ�õ�Ԫ��"<<endl;
	cin>>f;
	}      
}
