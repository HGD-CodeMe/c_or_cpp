#include?<iostream.h>?
typedef struct BiNode
{
	int data;
	struct BiNode *lchild,*rchild;
}BiNode,*BiTree;
void CreateBiTree(BiTree &T)
{
    char ch;
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
 main()
{
	CreateBiTree c;
	
	
} 