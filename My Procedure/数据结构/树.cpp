#include<iostream>
using namespace std;
class Node
{
public:
	char data;
	Node *Lchild,*Rchild;	
};
Node *T; 
class Tree
{
public:
    //void CreateTree(Node &T);
private:
   // Node *T;  
};
void CreateTree(T &T)
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
	//Node n;
	CreateTree(t);
}