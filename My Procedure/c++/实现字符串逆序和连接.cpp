#include<iostream>
#include<string.h>
using namespace std;
void fun(char * s,char * t)
{
	int i;
	int j;
	int x;
	j=strlen(s);
      strcpy(t,s);
     for(i=0;i<j/2;i++)
     {
       x=s[i];
       s[i]=s[j-i];
       s[j-i]=x;
    }
   for(i=j;i<2*(j+1);i++)
      t[i]=s[i-j+1];
      for(i=0;i<2*(j+1);i++)
      cout<<t[i];
 } 
 main()
 {
 	char a[100];
 	char b[100];
 	cin>>a;
 	fun(a,b);
 }
