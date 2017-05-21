#include <iostream.h>
#include <string.h>
#include <stdlib.h>

#define MaxInt 32767                    	
#define MVNum 100 
#define OK 1
#define ERROR 0                           
typedef char VerTexType;              	 
typedef int ArcType; 
typedef int Status;
typedef struct
{
	int *base;
	int front;
	int rear;
}SqQueue;
typedef struct{ 
  VerTexType vexs[MVNum];            		
  ArcType arcs[MVNum][MVNum];      		
  int vexnum,arcnum;                	
}AMGraph; 
int LocateVex(AMGraph G,int u)
{
 
   int i;
   for(i=0;i<G.vexnum;++i)
     if(u==G.vexs[i])
	 {
		 return i;
	 }
return -1;
}
Status InitQueue(SqQueue &Q)
{
	Q.base=new int[100];
	//if(!Q.base)
	//	exit(OVERFLOW)
    Q.front=Q.rear=0;
	return OK;
}
Status EnQueue(SqQueue &Q,int e)
{
	if((Q.rear+1)%100==Q.front)
		return ERROR;
	Q.base[Q.rear]=e;
	Q.rear=(Q.rear+1)%100;
	return OK;
}
Status DeQueue(SqQueue &Q,int &e)
{
	if(Q.rear==Q.front)
		return ERROR;
	e=Q.base[Q.front];
	Q.front=(Q.front+1)%100;
	return OK;
}
Status QueueEmpty(SqQueue &Q)
{
	if(Q.rear==Q.front)
		return OK;
	else
		return ERROR;
}
Status CreateUDN(AMGraph &G){ 
    int i,j,k,v1,v2,w;
	cout<<"please input all vex ,all arc:"<<endl;
    cin>>G.vexnum>>G.arcnum; 	
    for( i = 0; i<G.vexnum; ++i)
	{
      cout<<"please input vex information:"<<endl;		
      cin>>G.vexs[i];
	}	  
    for( i = 0; i<G.vexnum;++i)
	{		
		for( j = 0; j<G.vexnum;++j)
		{			
			G.arcs[i][j] = MaxInt;
		}
	}		
    for( k = 0; k<G.arcnum;++k)
	{ 
	  cout<<"please input v1,v2,and weight"<<endl;	
      cin>>v1>>v2>>w;                                 
      i = LocateVex(G, v1); 
	  j = LocateVex(G, v2);                    
	  G.arcs[i][j] = w; 
      G.arcs[j][i] = G.arcs[i][j];              
   }
   return OK; 
}
int visited[MVNum];
void DFS(AMGraph G, int v)
{        	
  cout<<v;  
  visited[v] = 1;  	
  for(int w = 0; w< G.vexnum; w++)
  {	  
        if((G.arcs[v][w]!=0)&& (!visited[w]))  
			DFS(G, w);
  }		
} 

/*void DFS(AMGraph G, int v){        	 
  cout<<v;  visited[v] = true;    		
  p= G.vertices[v].firstarc;      
while(p!=NULL){              	 
  w=p->adjvex;               	
  if(!visited[w])  DFS(G, w); 	
  p=p->nextarc;                
 } 
} 
*/
int NextAdjVex(AMGraph &G, int u, int w)
{
	int k;
	for(k=w+1;k<G.vexnum;k++)
	{
		if(G.arcs[u][k]==1)
			return k;
	}
	return -1;
}
int FirstAdjVex(AMGraph &G,int u)
{
	int m;
	for(m=u;m<G.vexnum;m++)
	{
		if(G.arcs[u][m]==1)
			return m;
	}
	return -1;
}
void BFS (AMGraph G, int v)
{ //v代表下标
    int u,w;
    SqQueue Q;	
    cout<<v;
	visited[v] = 1;     	
    InitQueue(Q);              		         
    EnQueue(Q, v);            			
    while(!QueueEmpty(Q))
	{   		
       DeQueue(Q, u);        		 
       for(w = FirstAdjVex(G, u); w>=0; w = NextAdjVex(G, u, w)) 
       if((G.arcs[v][w]!=0)&& (!visited[w]))
	   {               	
             cout<<w; 
			 visited[w] = 1;
			 EnQueue(Q, w); 
       }
    } 
}
void main()
{
   AMGraph G;
   CreateUDN(G);
   int v;
   cout<<"please input start tverse v"<<endl;
   cin>>v;
   //DFS(G,v);
   BFS(G,v);

}