#include<iostream>
#include<string>
using namespace std;
class HTNode
{
public:
	char letter;
	int weight;
	int parent,lchild,rchild;
};
class ChNode
{
public:
	char letter;
	int weight;
};
class HCode
{
public:
	int code[100];
};
void Select(HTNode HT[],int num,int &s1,int &s2)
{
	int min1=32767,min2=32767;//初始化最大值，一个盲点，
	for(int i=1;i<=num;i++)
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
void CreateHuffmanTree(HTNode HT[],int n,ChNode s[])
{
	int m,i,s1,s2;
	/* if(n<=1)
		return false;
	else
	{ */
	    m=2*n-1;
	    //HT=new HTNode[m+1];
		for(i=1;i<=m;i++)
		{
			HT[i].parent=0;
			HT[i].lchild=0;
			HT[i].rchild=0;
			HT[i].weight=0;
		}
		for(i=1;i<=n;i++)//�����һ��
		{
			HT[i].letter=s[i].letter;
			cout<<HT[i].letter<<"  ";
		    HT[i].weight=s[i].weight;
			cout<<HT[i].weight;
		
		}
		cout<<"HuffmanTree prime state:"<<endl;
	    for(i=1;i<=m;i++)
	    {
		    cout<<HT[i].letter<<"   "<<HT[i].weight<<"   "<<HT[i].parent<<"  "<<HT[i].lchild<<"   "<<HT[i].rchild;
		    cout<<endl;
	    }
        cout<<endl;		
		for(i=n+1;i<=m;i++)
		{
			Select(HT,i-1,s1,s2);
			HT[s1].parent=i;
			HT[s2].parent=i;
			HT[i].lchild=s1;
			HT[i].rchild=s2;
			HT[i].weight=HT[s1].weight+HT[s2].weight;
		}
	   cout<<endl;
	   cout<<"HuffmanTree final state"<<endl;
	   for(i=1;i<=m;i++)
	   {
		cout<<HT[i].letter<<"  "<<HT[i].weight<<"  "<<HT[i].parent<<"  "<<HT[i].lchild<<"   "<<HT[i].rchild;
		cout<<endl;
	   }

}
void CreatCode(HTNode HT[],HCode hcd[],int n)
{
	int i,f,c,start;
	HCode hc;
	for(i=1;i<=n;i++)
	{
		start=n-1;
		c=i;
		f=HT[i].parent;
		while(f!=0)
		{
			start--;
			if(HT[f].lchild==c)
			{
				hc.code[start]=0;
			    //cout<<"ok";
			}
			else
			{
				hc.code[start]=1;
			    //cout<<"ok";
			}
			c=f;
			f=HT[f].parent;
			cout<<hc.code[start]<<"  ";
			//cout<<endl;
		}
		cout<<endl;
	//	hc.m_start++;
	//	cout<<hc.code[hc.m_start];
	}
	/*
	cout<<"Huffman code:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<HT[i].letter<<"  "<<HT[i].weight;
	    for(int j=hcd[i].m_start;j<n;j++)
		{
			cout<<hcd[i].code[j]<<endl;
		}
	}*/
}
/*void Coding(HTNode HT[],HCode hcd[],int n,char str[])
{
	for(int i=0;str[i]!='\0';i++)//������ܻᱨ��
	{
		for(int j=0;j<n;j++)
		{
			if(str[i]==HT[i].letter)
			{
				for(int k=hcd[j].m_start;k<n;k++)
				{
					cout<<hcd[j].code[k];
				}
				break;
			}
		}
	}
	cout<<endl;
}*/
main()
{
	 
	char str[100];
	cout<<"welcome! user,please input some char:"<<endl;
	cin>>str;
	ChNode s[20];
	memset(s,0,sizeof(ChNode)*20);
	int j=1;
	for(int i=0;str[i]!='\0';i++)
	{
		int flag=0;
		for(int k=1;k<j;k++)
		{
			if(str[i]==s[k].letter)
			{
				s[k].weight++;
				flag=1;
				break;
			}
		}
		if(!flag)
		{
			s[j].letter=str[i];
			s[j].weight=1;
			j++;
		}
	}
	HTNode ht[100];
	memset(ht,0,sizeof(HTNode)*100);
	HCode hcd[100];
	int num=-1;
	while(1)
	{
		cout<<"***********************Main Menu*************************"<<endl;
		cout<<"**  1:CreateHuffman and check Prime state,Final state  **"<<endl;
        cout<<"**  2:cheateHuffman code and check                     **"<<endl;
		cout<<"**  3:Compile                                          **"<<endl;
		cout<<"**  4:Quit                                             **"<<endl;
		cout<<"*********************************************************"<<endl;
		cin>>num;
		if(num==4)
			break;
		switch(num)
		{
			case 1: CreateHuffmanTree(ht,j-1,s);break;
			case 2: CreatCode(ht,hcd,j-1);break;
			//case 3: {char str[100];cout<<"please input translation:"<<endl;cin>>str;cout<<"translation result:"<<endl;Coding(ht,hcd,j,str);break;};
			default:break;
		}
	}
		
}