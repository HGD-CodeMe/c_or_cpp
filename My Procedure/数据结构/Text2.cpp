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
	char code[100];
	int m_start;
};
void Select(HTNode HT[],int num,int &s1,int &s2)
{
	int min1=32767,min2=32767;//鍒濆鍖栨渶澶у�硷紝涓�涓洸鐐癸紝
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
	    //HT=new HTNode[m+1];
		for(i=0;i<m;i++)
		{
			HT[i].parent=0;
			HT[i].lchild=0;
			HT[i].rchild=0;
			HT[i].weight=0;
		}
		for(i=0;i<n;i++)//这里改一下
		{
			HT[i].letter=s[i].letter;
		HT[i].weight=s[i].weight;
			//cout<<HT[i].letter;
			//cin>>HT[i].weight;
		}
		cout<<"HuffmanTree prime state:"<<endl;
	    for(i=0;i<m;i++)
	    {
		    cout<<HT[i].letter<<"   "<<HT[i].weight<<"   "<<HT[i].parent<<"  "<<HT[i].lchild<<"   "<<HT[i].rchild;
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
			HT[i].weight=HT[s1].weight+HT[s2].weight;
		}
	   cout<<endl;
	   cout<<"HuffmanTree final state"<<endl;
	   for(i=0;i<m;i++)
	   {
		cout<<HT[i].letter<<"  "<<HT[i].weight<<"  "<<HT[i].parent<<"  "<<HT[i].lchild<<"   "<<HT[i].rchild;
		cout<<endl;
	   }

}
void CreatCode(HTNode HT[],HCode hcd[],int n)
{
	int i,f,c,count=0;
	HCode hc;
	for(i=1;i<=n;i++)
	{
		hc.m_start=n-1;
		c=i;
		f=HT[i].parent;
		while(f!=0)
		{
			if(HT[f].lchild==c)
				hc.code[hc.m_start--]='0';
			else 
				hc.code[hc.m_start--]='1';
			c=f;
			f=HT[f].parent;
			count++;
		}
		hc.m_start++;
		for(int n=1;n<=count;n++)
		{
			hcd[i].code[n]=hc.code[n];
		}
	}
	cout<<"Huffman code:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<HT[i].letter<<"  "<<HT[i].weight;
	    for(int j=hcd[i].m_start;j<n;j++)
		{
			cout<<hcd[i].code[j]<<endl;
		}
	}
}
void Coding(HTNode HT[],HCode hcd[],int n,char str[])
{
	for(int i=0;str[i]!='\0';i++)//这里可能会报错
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
}
main()
{
	 
	char str[100];
	cout<<"welcome! user,please input some char:"<<endl;
	cin>>str;
	ChNode s[20];
	memset(s,0,sizeof(ChNode)*20);
	int j=0;
	for(int i=0;str[i]!='\0';i++)
	{
		int flag=0;
		for(int k=0;k<j;k++)
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
			case 1: CreateHuffmanTree(ht,j,s);break;
			case 2: CreatCode(ht,hcd,j);break;
			case 3: {char str[100];cout<<"please input translation:"<<endl;cin>>str;cout<<"translation result:"<<endl;Coding(ht,hcd,j,str);break;};
			default:break;
		}
	}
		
}