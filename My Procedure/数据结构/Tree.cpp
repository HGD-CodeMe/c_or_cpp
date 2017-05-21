#include<iostream>
using namespace std;
class Node
{
public:
	char data;
	Node *Lchild,*Rchild;	
};
class Tree
{
//public:
    //void CreateTree(Node &T);
private:
    Node *T;//定义头指针  
};
void CreateTree(Node &T)
{ 
	char ch;
	cin>>ch;
	if(ch=='#')
		T=NULL;
	else
	{
		T=new Node;
		T->data=ch;
		CreateTree(T->Lchild);
		CreateTree(T->Rchild);
	}
}
main()
{
	Tree t;
	t.CreateTree(t.T);
}