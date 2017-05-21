#include<iostream>//这个可以用于折半排序，很重要的基础算法 
using namespace std;
main()
{
	int a[4]={3,5,8,11};
	int b[7]={2,6,8,9,11,15,20};
	int c[20];
	int k=0,i=0,j=0;
	/*int *pa,*pb,*pc;
	pa=a;
	pb=b;
	pc=c;
	while(pa!=&a[4]||pb!=&b[7])
	{
		
	}*/
	while(i<4&&j<7)
	{
	    if(a[i]>=b[j])
		{
		  c[k++]=b[j++];//这里是将我下面的一步合并了； 
		  //j++;
		  
	    }
		else
		{
		  c[k++]=a[i++];
		  //i++;
		  
	    }
	}
	while(i==4)//这里不能用if语句，这里是将a数组或者b数组剩下的元素排到c数组后面，有点难理解这段代码； 
		c[k++]=b[j++];
    while(j==7)
        c[k++]=a[i++];
	for(int n=0;n<11;n++)
		cout<<c[n]<<'\t';
	
 } 
