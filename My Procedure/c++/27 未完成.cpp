#include<iostream>
//#include<string>
 using namespace std;
 void f(char s[100],char t[100]);
 main()
 {
 	 char s[100];
	  char t[100];
 	cout<<"please input tow chars"<<endl;
 	cin.get(s,100);
    f(s,t);
    cout<<t<<endl;
 	
 }
 #include<string.h>
 void f(char s[100],char t[100])
 {
 	int i,j,k;
 	j=strlen(s);
 	for(i=0;i<=j;j++)
 	t[i]=s[i];
 	for(i=0;i<=j;j++)
 	//cout<<t[i];
 	for(i=j-1;j>=0;j--)
 	s[j-i]=t[j];
 	//for(k=0;k<=j;k++)
 //	cout<<s[k]<<endl;
 t[j+j]='\0';
 //cout<<t<<endl;
 	
 }
 
 
