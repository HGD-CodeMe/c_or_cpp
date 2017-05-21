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
	elem=new int[100];//这一步有待完善，通过手动输入,这一部分还是弱 
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
	      cout<<"CreatList Sucessful！"<<endl;
	}
	else
	{
		cout<<"CreatList Fail！"<<endl; 
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
		for(int k=length;k>=i-1;k--)//注意这里从后面开始移 
		{
			elem[k+1]=elem[k];
		}
		elem[i]=e;
		length++;
		cout<<"Insert successful!"<<endl;
		return true;
	}
}
bool SqList::deleteList()//这里直接覆盖的原来的元素,有点没过关 
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
	for(int i=0;i<=length;i++)//这个循环不完美
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
	L.creatList();//这种输出方式更好看 
	cout<<"请输入对线性表的操作，退出请按 0："<<endl;
	cout<<"1-插入新元素,\t       ,2-删除元素"<<endl<<endl;
	cout<<"3-遍历线性表,\t       ,4-遍历此元素是否在线性表中"<<endl<<endl;
	cout<<"5-查找此元素的前驱,\t ,6-查找此元素的后继"<<endl<<endl;
	cout<<"7-查找此位置的元素"<<endl;
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
	cout<<"请输入对线性表的操作，退出请按 0："<<endl;
	cout<<"1-插入新元素,\t       ,2-删除元素"<<endl<<endl;
	cout<<"3-遍历线性表,\t       ,4-遍历此元素是否在线性表中"<<endl<<endl;
	cout<<"5-查找此元素的前驱,\t ,6-查找此元素的后继"<<endl<<endl;
	cout<<"7-查找此位置的元素"<<endl;
	cin>>f;
	}      
}
