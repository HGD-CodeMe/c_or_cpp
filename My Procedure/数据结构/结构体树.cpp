#include<iostream>
using namespace std;
typedef struct BiNode
{
	char data;
	struct BiNode *lchild,*rchild;
}BiNode,*BiTree;
void CreateBiTree(BiTree &T)
{
    char ch;
	cout<<"please input char"<<endl;
	cin>>ch;
	if(ch=='#') 
		T=NULL;
	else
	{
		T=new BiNode;
		T->data=ch;
		CreateBiTree(T->lchild);
		CreateBiTree(T->rchild);
	}
}
void InOrderTraverse(BiTree &T)//中序
{
	if(T)
	{
		InOrderTraverse(T->lchild);
		cout<<T->data;
		InOrderTraverse(T->rchild);
	}
}
void PreTraverse(BiTree &T)//先序
{
	if(T)
	{
		cout<<T->data;
		PreTraverse(T->lchild);
		PreTraverse(T->rchild);
	}
}
void BeTraverse(BiTree &T)//后序
{
	if(T)
	{
		BeTraverse(T->lchild);
		BeTraverse(T->rchild);
		cout<<T->data;
	}
}
int main()
{
    struct BiNode *BiTree;
    CreateBiTree(BiTree);
	InOrderTraverse(BiTree);
	cout<<endl;
    PreTraverse(BiTree);
	cout<<endl;
    BeTraverse(BiTree); 
	return 0;	
} 