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
	     int length;//(�����ʱ��Ϊ����)
		 int *elem;
		     
};
Sqlist::Sqlist()
{
	elem=new int[size];//(��������Ǹ�ä��,������Ҫ�ж��Ƿ�����ɹ���)
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
	cout<<"�˱������"<<endl;
}
int Sqlist::Getelem(int i)
{
	if(i<0||i>length)
		return false;
	else	
	    cout<<"���ֵ�ǣ�"<<endl;
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
	cout<<"Ԫ���Ѿ��ɹ�����"<<endl;
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
	cout<<"���Ԫ���Ѿ�ɾ��"<<endl;
	return true;
}
int Sqlist::LocateElem(int i,int *e)
{
	for(int k=0;k<length;k++)
	{
		if(elem[i]==*e)
		{
			cout<<"���Ԫ���ڱ��е�λ���ǣ�"<<endl;
		    return i;
	    }
	}
	cout<<"����û�����Ԫ��"<<endl;
}
int Sqlist::PrioElem(int i)
{
	if(i<=0||i>length)//��һ��Ԫ��û��ֱ��ǰ�� 
	{
		return false;
	}
	else
	return elem[i-1];
}
int Sqlist::NextElem(int i)
{
    if(i<=0||i>length-1)//���һ��Ԫ��û��ֱ�Ӻ�� 
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
 	cout<<"��ѡ��һ���������˳��밴0"<<endl; 
 	cout<<"1:�������"<<endl; 
 	cout<<"2:���ڱ��в���Ԫ��"<<endl;
 	cout<<"3:��ѡ��ɾ���ĸ�λ�õ�Ԫ��"<<endl;
 	cout<<"4:���������ݣ�ȷ���Ƿ��ڱ���"<<endl;
 	cout<<"5:������һ��λ�ã�������ǰ���Ԫ��"<<endl;
 	cout<<"6:������һ��λ�ã�����������Ԫ��"<<endl;
 	cout<<"7:������һ��λ�ã�������Ԫ��"<<endl;
 	cout<<"8:��մ��б�"<<endl;
 	cout<<"9:�������б�"<<endl;
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
		 cout<<"��ѡ��һ���������˳��밴0��"<<endl;
		 cout<<"1:�������"<<endl; 
 	     cout<<"2:���ڱ��в���Ԫ��"<<endl;
 	     cout<<"3:��ѡ��ɾ���ĸ�λ�õ�Ԫ��"<<endl;
 	     cout<<"4:���������ݣ�ȷ���Ƿ��ڱ���"<<endl;
 	     cout<<"5:������һ��λ�ã�������ǰ���Ԫ��"<<endl;
 	     cout<<"6:������һ��λ�ã�����������Ԫ��"<<endl;
 	     cout<<"7:������һ��λ�ã�������Ԫ��"<<endl;
 	     cout<<"8:��մ��б�"<<endl;
 	     cout<<"9:�������б�"<<endl;
 	     cin>>f;
	 }
  } 
