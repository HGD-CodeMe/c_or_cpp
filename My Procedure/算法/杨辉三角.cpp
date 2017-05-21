 #include<iostream>
using namespace std;
main()
{
   int a[50][50];
   int i=0,j=0;
  // a[i][0]=1;
   for(i=0;i<6;i++)
   {
   		for(int k=0;k<6-i;k++)
		{
			cout<<" ";
		}
   	    for(j=0;j<=i;j++)
   	    {   
	        if(i==j) 
	            a[i][j]=1;     
   	        else
   	     	    a[i][j]=a[i-1][j-1]+a[i-1][j];
	    /*else
		{ 
	        a[i][j]=1;
        }*/
	    cout<<a[i][j] <<" ";
	   }
	cout<<endl;
   // for(int k=1/i;k>=0;k--)
    //cout<<" ";
   }
}
