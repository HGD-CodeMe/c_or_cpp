#include<iostream>
using namespace std;
main()
{
	char s[20]="abcabcacb";
	char t[20]="abcac";
	int i,j=0;
    while(s[i]!='\0'&&t[j]!='\0')
    {
    	if(s[i]==t[j])
    	{
    		i++;
    		j++;
		}
		else
		{
			i=i-(j-1)+1;
			j=0;
		}
	}
	if(s[i]=='\0')
	{
		cout<<"check fail!"<<endl;
	}
	if(t[j]=='\0')
	{
	
		cout<<"check successful!"<<endl;
		cout<<i+1<<endl;
	}
}
