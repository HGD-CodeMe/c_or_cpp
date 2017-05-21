#include<iostream>
using namespace std;
class Stack
{
public:
	Stack();
	~Stack();
	bool Push(int *e);
	bool Pop();
//private:
	int *base;
	int *top;
	int stacksize;
};
Stack::Stack()
{
	
	base=new int[100];
	/*if(!base)
		return 0;
	else*/
    top=base;
	stacksize=100;
}
Stack::~Stack()
{
	stacksize=0;
	delete[] base;
}
bool Stack::Push(int *e)
{
	if(top-base==100)
		return false;
	else
	{
		*top++=*e;
		return true;
	}
	//return true;
}
bool Stack::Pop()
{
	int e;
	if(top==base)
		return false;
	else
	{
		e=*--top;//这个自减符号不能改变 
		cout<<e; 
		return true;
	}
}
int main()
{   
    bool f;
	int n,i;
	Stack st;
	cout<<"please input need exchange number:"<<endl;
	cin>>n;
	while(n!=0)
	{
       i=n%2;
       f=st.Push(&i);
	   if(f==false)
	    	cout<<"push fail"<<endl;
		else
		{ 
		    cout<<"push ok"<<endl; 
		    n=n/2;
		}

	}
	while(n==0&&st.top!=st.base)
	{
		f=st.Pop();
		if(f==false)
	    	cout<<"pop fail"<<endl;
		else
		    cout<<"pop ok"<<endl;		
	}
	return 0;
}
