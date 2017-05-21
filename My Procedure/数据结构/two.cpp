#include<iostream>
using namespace std;
class HTNode
{
public:
	int weight;
	int parent,lchild,rchild;
};
void Select(HTNode HT[],int num,int &s1,int &s2)
{
	int min1=32767,min2=32767;//��ʼ�����ֵ��һ��ä�㣬
	for(int i=0;i<=num;i++)
	{
	    if(HT[i].parent==0&&HT[i].weight<min1)
		{
			min2=min1;
			s2=s1;
			min1=HT[i].weight;
			s1=i;
	    }
		else
		{
            if(HT[i].weight<min2&&HT[i].parent==0)
	        {
		        min2=HT[i].weight;
		        s2=i;
	        }
		}
	}
}
void CreateHuffmanTree(HTNode HT[],int n)
{
	int m,i,s1,s2;
	/* if(n<=1)
		return false;
	else
	{ */
	    m=2*n-1;
	   // HT=new HTNode[m+1];
		for(i=0;i<m;i++)
		{
			HT[i].parent=0;
			HT[i].lchild=0;
			HT[i].rchild=0;
		
		}
		for(i=0;i<n;i++)
		{
			cin>>HT[i].weight;
		}
		cout<<"CreateHuffmanTree is:"<<endl;
	    for(i=0;i<2*n-1;i++)
	    {
		    cout<<i<<"  "<<HT[i].weight<<"  "<<HT[i].parent<<"  "<<HT[i].lchild<<"   "<<HT[i].rchild;
		    cout<<endl;
	    }
        cout<<endl;		
		for(i=n;i<m;i++)
		{
			Select(HT,i-1,s1,s2);
			HT[s1].parent=i;
			HT[s2].parent=i;
			HT[i].lchild=s1;
			HT[i].rchild=s2;
			HT[i].lchild=s2;
			HT[i].rchild=s1;
			HT[i].weight=HT[s1].weight+HT[s2].weight;
		}
	for(i=0;i<2*n-1;i++)
	{
		cout<<i<<"  "<<HT[i].weight<<"  "<<HT[i].parent<<"  "<<HT[i].lchild<<"   "<<HT[i].rchild;
		cout<<endl;
	}
}

main()
{
	int n;
    HTNode ht[100 ];
	cout<<"please input WeightNode numbers:"<<endl;
	cin>>n;
	CreateHuffmanTree(ht,n);
    
	
}