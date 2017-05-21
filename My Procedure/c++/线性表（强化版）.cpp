#include<iostream>
using namespace std;
class Sqlist
{
	public:
	    Sqlist();
	    ~Sqlist();
	    void Clearlist();
	    bool InsterList(int i,int *e);
	    bool Dletelist(int i);
	    int LocateElem(int i,int *e);
	    int Getelem(int i);
	    int PrioElem(int i);
	    int NextElem(int i);
	    void Traverselist();
	    int size;
	private:
	     int length;//(这个暂时定为整形)
		 int *elem;
		     
};
Sqlist::Sqlist()
{
	elem=new int[size];//(这个部分是个盲点,不是需要判断是否申请成功？)
	length==0;
}
Sqlist::~Sqlist()
{
	delete []elem;
	elem==NULL;
}
void Sqlist::Clearlist()
{ 
	length==0;
	cout<<"此表已清空"<<endl;
}
int Sqlist::Getelem(int i)
{
	if(i<0||i>length)
		return false;
	else	
	    cout<<"这个值是："<<endl;
	    return elem[i];
}
bool Sqlist::InsterList(int i,int *e)
{
	if(i<0||i>length)
	{
		return false;
	}
	else
	for(int k=i;k<length;k++)
	{
		elem[k+1]=elem[k];
	}
	elem[i]=*e;
	length++;
	cout<<"元素已经成功插入"<<endl;
	return true; 
}
bool Sqlist::Dletelist(int i)
{
	if(i<0||i>length)
	{
		return false;
	}
	else
	for(int k=i;k<length;k++)
	{
		elem[k]=elem[k+1];
	}
	//delete[i] L.elem;
	elem[i]=NULL;
	length--;
	cout<<"这个元素已经删除"<<endl;
	return true;
}
int Sqlist::LocateElem(int i,int *e)
{
	for(int k=0;k<length;k++)
	{
		if(elem[i]==*e)
		{
			cout<<"这个元素在表中的位置是："<<endl;
		    return i;
	    }
	}
	cout<<"表中没有这个元素"<<endl;
}
int Sqlist::PrioElem(int i)
{
	if(i<=0||i>length)//第一个元素没有直接前驱 
	{
		return false;
	}
	else
	return elem[i-1];
}
int Sqlist::NextElem(int i)
{
    if(i<=0||i>length-1)//最后一个元素没有直接后继 
	{
		return false;
	}
	else
	return elem[i+1];
}
void Sqlist::Traverselist()
{
	for(int i=0;i<length;i++)
	{
	   cout<<elem[i]<<'\t';
    }
 }
 main()
 {
 	Sqlist L;
 	int i;
 	int e;
 	int f;
 	cout<<"请选择一个操作，退出请按0"<<endl; 
 	cout<<"1:请输入表长"<<endl; 
 	cout<<"2:请在表中插入元素"<<endl;
 	cout<<"3:请选择删除哪个位置的元素"<<endl;
 	cout<<"4:请输入数据，确定是否在表中"<<endl;
 	cout<<"5:请输入一个位置，返回其前面的元素"<<endl;
 	cout<<"6:请输入一个位置，返回其后面的元素"<<endl;
 	cout<<"7:请输入一个位置，返回其元素"<<endl;
 	cout<<"8:清空此列表"<<endl;
 	cout<<"9:遍历此列表"<<endl;
 	cin>>f;
 	while(f!=0)
 	{
 		switch(f)
 		{
 			case 1: cin>>i;L.size=i;break;
 			case 2: cin>>e;L.InsterList(1,&e);break;
 			case 3: L.Dletelist(1);break;
 			case 4: cin>>e;L.LocateElem(1,&e);break;
 			case 5: L.PrioElem(1);break;
 			case 6: L.NextElem(1);break;
 			case 7: L.Getelem(1);break;
 			case 8: L.Clearlist();break;
 			case 9: L.Traverselist();break;
		 }
		 cout<<"请选择一个操作，退出请按0："<<endl;
		 cout<<"1:请输入表长"<<endl; 
 	     cout<<"2:请在表中插入元素"<<endl;
 	     cout<<"3:请选择删除哪个位置的元素"<<endl;
 	     cout<<"4:请输入数据，确定是否在表中"<<endl;
 	     cout<<"5:请输入一个位置，返回其前面的元素"<<endl;
 	     cout<<"6:请输入一个位置，返回其后面的元素"<<endl;
 	     cout<<"7:请输入一个位置，返回其元素"<<endl;
 	     cout<<"8:清空此列表"<<endl;
 	     cout<<"9:遍历此列表"<<endl;
 	     cin>>f;
	 }
  } 
