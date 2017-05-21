#include<iostream>
using namespace std;
main()
{
	char s[20]="abcabcacb";
	char t[20]="abcac";
	/*int count=0;
	for(int i=count;i<=9;i++)
	{
		for(int j=0;j<=5;j++)
		{
			if(j==5)
			{
				cout<<"匹配成功"<<endl;
			}
			else if(S[i]==T[j])
			    break;
			else
			{count++;break;}
			    
			      
			
		}
	    if(count==9)
	    {cout<<"匹配失败"<<endl;break;}
	}*/
	int index=0;
	int i=0,j=0;
	while((s[i]!='\0')&&(t[j]!='\0'))//在算法语句中，一定不要老是想用for语言，有时会造成不方便 ，同时'\0'要记得有作用 
	{
	    if(s[i]==t[j])
	    {
		   i++;
		   j++;
	    }
	    else
	    {
	    	index++;
	    	i=index;
	    	j=0;
		}
	}
		if(t[j]=='\0')
		 cout<<index+1;
		else 
		cout<<"匹配失败";
		
}
