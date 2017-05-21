#include<iostream>
using namespace std; 
main()
{
	float a[6][3],c[6],b;
	int i,j;
	cout<<"please input grade"<<endl;
	for(i=0;i<6;i++)
		for(j=0;j<3;j++){
			cin>>b;
			a[i][j]=b;
		}
		for(i=0;i<6;i++)
        {
        	c[i]=0;
        	for(j=0;j<3;j++)
            c[i]=c[i]+a[i][j];
            c[i]=c[i]/3;
		}
		for(i=0;i<6;i++)
	cout<<"student"<<i+1<<"="<<c[i]<<endl;
	}

	
	


