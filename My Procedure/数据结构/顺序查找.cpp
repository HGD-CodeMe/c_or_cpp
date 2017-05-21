#include<iostream>
using namespace std;
class List
{
public:
	void CreatList();
	void ShowList();
	int *root;
	int length;
};
void List::CreatList()
{
	cout<<"please input List length:"<<endl;
	cin>>length;
	root=new int[length];
	for(int i=1;i<=length;i++)//表开头不存储数据
	{
		cin>>root[i];
	}
	cout<<"List Creat succeeful!"<<endl;
}
void List::ShowList()
{
	for(int i=1;i<=length;i++)
	{
		cout<<root[i]<<"\t";
	}
}
void SequentialSearch(List &s)
{
	int key;
	cout<<"please input need search elem"<<endl;
	cin>>key;
	s.root[0]=key;//设置哨兵,否则每次循环都需要检查表是否查找完毕
	for(int i=s.length;s.root[i]!=key;--i)
	{
		cout<<"Elem searched,position is:"<<i-1<<endl;//这里可能有问题   
	}
	//if(s.root[i])
}
int Seach_Bin(List &s)//这里还有一种递归算法
{
	int key,low=1,high=s.length,mid;
	cout<<"please input need search elem"<<endl;
	cin>>key;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key==s.root[mid])//这一块代码需要连贯
			//cout<<"postion is :"<<mid<<endl;
			return mid;
		else if(key<s.root[mid])
			high=mid-1;
		else
			low=mid+1;
	}
}
void StraightInsertSort(List &s)
{
	int j;
	for(int i=2;i<=s.length;i++)//这里初始值需要注意
	{
		if(s.root[i]<s.root[i-1])
		{
			s.root[0]=s.root[i];//将带排序的暂存到监视哨中
			s.root[i]=s.root[i-1];
			for(j=i-2;s.root[0]<s.root[j];j--)
			{
				s.root[j+1]=s.root[j];//腾出插入空间
			}
			s.root[j+1]=s.root[0];
		}
		
	}
}
main()
{

	List l;
	l.CreatList();
	//SequentialSearch(l);
	//cout<<Seach_Bin(l);
	StraightInsertSort(l);
	l.ShowList();
}