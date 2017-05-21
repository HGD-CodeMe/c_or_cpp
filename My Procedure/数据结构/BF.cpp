#include<iostream>
using namespace std;
main()
{
	char *s;
	s="abcabcacb";
	char *t;
	t="abcac";
	int i,j=0;
    while(i<=8&&j<=4)
    {
    	if(s[i]==t[j])
    	{
    		i++;
    		j++;
    		cout<<"ok";
		}
		else
		{
			i=i-(j-1)+1;
			j=1;
			cout<<"fail";
		}
	}
	if(j>4)
	{
		cout<<"check successful!"<<endl;
		cout<<"position:"<<i-j+1<<endl;
	}
	else
	{
	    cout<<"check fail!"<<endl;
	}
}
