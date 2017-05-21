#include<iostream>
using namespace std;
#include<iomanip>
 main()
 {
 	int a,b,c,t;
 	cout<<"请输入三个数"<<endl;
 	cin>>a>>b>>c;
	 if(a>b)
	 t=a,a=b,b=t;
	 if(a>c)
	 t=a,a=c,c=t;
	 if(b>c)
	 t=b,b=c,c=t;
	 cout<<a<<setw(3)<<b<<setw(3)<<c<<setw(3)<<endl;	
 }
