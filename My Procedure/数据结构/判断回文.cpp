#include<iostream>
//#include<string.h>
using namespace std;
class Stack
{
public:
	Stack();
	~Stack();
	char StackPop();
	void StackPush(char *ch);
//private:
    /*int *base,
	int	*top;
	int Max;
	char *base;
	int size;
	int top;*/
	char *base,*top;
	int size;
};
Stack::Stack()
{
    /*MAX=100;
	base=new int[100];
	base=top;
	Max=100;*/
	size=100;
	base=new char[size];
	//top=0;
	top=base;
}
Stack::~Stack()
{
	delete[] base;
}
void Stack::StackPush(char *ch)
{
	//if(top==100)
	if(top-base==100)
		cout<<"Stack is full!"<<endl;
    else
      // base[top]=*ch;
       *top++=*ch;
	   //cout<<"ok"<<endl;
	   //top++;
}
char Stack::StackPop()
{
	char e;
	//if(top==0)
	if(top==base)	
		cout<<"Stack is null!"<<endl;
	else
	{
		//top--;
		//e=base[top];
		e=*--top;
	    return e;
	}
	
}
void Palindrom(Stack &s)//这一部分我感觉复杂了
{
    char ch[50];
	int length,i,count1=0,count2=0;
	cout<<"please input char length:"<<endl;
	cin>>length;
    for(i=0;i<length;i++)
	{
		cin>>ch[i];
	}
	for(i=0;i<length/2;i++)//这里不能带等号
	{
		s.StackPush(&ch[i]);
	}
	for(i=length/2;i<length;i++)//这里有点不完美
	{
		if(length%2==0&&s.StackPop()==ch[i])
			count1++;
		    if(s.base==s.top)
				break;
		if(length%2!=0&&s.StackPop()==ch[i+1])
		   count1++;
	       if(s.base==s.top)
				break;
	    //cout<<s.StackPop();
	}
	//cout<<count;
	if(count1==length/2||count2==length/2)
		cout<<"ok"<<endl;
	else
		cout<<"false"<<endl;
		

} 
main()
{
	Stack s;
	//char a="b";
	//s.StackPush('b');
	//cout<<s.StackPop();
	Palindrom(s);
}