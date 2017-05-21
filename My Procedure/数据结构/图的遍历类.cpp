/*      A
      /   \
     B     D
    / \   / \
   C   F G - H
    \ /
     E

*/
#include<iostream>
#include<vector>
using namespace std;
class Node
{
public:
	Node(char =0);
	char m_cData;
	bool m_bIsVisited;
};
Node::Node(char data)
{
	m_cData=data;
	m_bIsVisited=false;
}
class CMap
{
public:
	CMap(int capacity);
	~CMap();
	bool addNode(Node *pNode);
	void resetNode();
	bool setValueToMatrixForDirectedGraph(int row,int col,int val=1);
    bool setValueToMatrixForUndirectedGraph(int row,int col,int val=1);
	bool getValueFromMatrix(int row,int col,int &val);
	void breadthTraverseImpl(vector<int>preVec);
    void printMatrix();
   
    void depthFirstTraverse(int nodeIndex);
    void breadthTraverse(int nodeIndex);
private:
	int m_iCapacity;
	int m_iNodeCount;
	

	Node *m_pNodeArray;
	int *m_pMatrix;
};
CMap::CMap(int capacity)
{
	m_iCapacity=capacity;
	m_iNodeCount=0;
	m_pNodeArray=new Node[m_iCapacity];//important
	m_pMatrix=new int[m_iCapacity*m_iCapacity];//important
	//memset(m_pMatrix,0,m_iCapacity*m_iCapacity*sizeof(int)));
	for(int i=0;i<m_iCapacity*m_iCapacity;i++)
	{
		m_pMatrix[i]=0;
	}
}
CMap::~CMap()
{
	delete []m_pNodeArray;
	delete []m_pMatrix;
}
bool CMap::addNode(Node *pNode)
{
	if(pNode==NULL)
		return false;
	m_pNodeArray[m_iNodeCount].m_cData=pNode->m_cData;
	m_iNodeCount++;
	return true;
}
void CMap::resetNode()
{
	for(int i=0;i<m_iNodeCount;i++)
	{
		m_pNodeArray[i].m_bIsVisited=false;
	}
}
bool CMap::setValueToMatrixForDirectedGraph(int row,int col,int val)
{
	if(row<0||row>=m_iCapacity)
		return false;
	if(col<0||col>=m_iCapacity)
		return false;
	m_pMatrix[row *m_iCapacity+col]=val;
	m_pMatrix[col *m_iCapacity+row]=val;
	return true;
	
}
bool CMap::setValueToMatrixForUndirectedGraph(int row,int col,int val)
{
	if(row<0||row>=m_iCapacity)
		return false;
	if(col<0||col>=m_iCapacity)
		return false;
	m_pMatrix[row *m_iCapacity+col]=val;
	return true;
}
bool CMap::getValueFromMatrix(int row,int col,int &val)
{
	if(row<0||row>=m_iCapacity)
		return false;
	if(col<0||col>=m_iCapacity)
		return false;
	val=m_pMatrix[row *m_iCapacity+col];
	return true;	
}
void CMap::printMatrix()
{
	for(int i=0;i<m_iCapacity;i++)
	{
		for(int j=0;j<m_iCapacity;j++)
		{
			cout<<m_pMatrix[i * m_iCapacity+j]<<" ";
		}
		cout<<endl;
	}
}
void CMap::depthFirstTraverse(int nodeIndex)
{
	cout<<m_pNodeArray[nodeIndex].m_cData<<" ";
	m_pNodeArray[nodeIndex].m_bIsVisited=true;
    int value=0;
	for(int i=0;i<m_iCapacity;i++)
	{
		getValueFromMatrix(nodeIndex,i,value);
		if(value==1)
		{
			if(m_pNodeArray[i].m_bIsVisited)
			{
				continue;
			}
			else
			{
				depthFirstTraverse(i);
			}
		}
		else
		{
			continue;
		}
	}
}
void CMap::breadthTraverse(int nodeIndex)
{
	cout<<m_pNodeArray[nodeIndex].m_cData<<" ";
	m_pNodeArray[nodeIndex].m_bIsVisited=true;

	vector<int>curVec;//±ê×¼Ä£°å¿â
	curVec.push_back(nodeIndex);
	breadthTraverseImpl(curVec);
}
void CMap::breadthTraverseImpl(vector<int>preVec)
{
	int value=0;
	vector<int>curVec;
	for(int j=0;j<(int)preVec.size();j++)
	{
		for(int i=0;i<m_iCapacity;i++)
		{
			getValueFromMatrix(preVec[j],i,value);
			if(value!=0)
			{
				if(m_pNodeArray[i].m_bIsVisited)
				{
					continue;
				}
				else
				{
					cout<<m_pNodeArray[i].m_cData<<" ";
					m_pNodeArray[i].m_bIsVisited=true;

					curVec.push_back(i);
				}
			}
		}
	}
	if(curVec.size()==0)
		return;
	else
		breadthTraverseImpl(curVec);
}
main()
{
	CMap *pMap=new CMap(8);
	
	Node *pNodeA=new Node('A');
	Node *pNodeB=new Node('B');
	Node *pNodeC=new Node('C');
	Node *pNodeD=new Node('D');
	Node *pNodeE=new Node('E');
	Node *pNodeF=new Node('F');
	Node *pNodeG=new Node('G');
	Node *pNodeH=new Node('H');
	
	pMap->addNode(pNodeA);
	pMap->addNode(pNodeB);
	pMap->addNode(pNodeC);
	pMap->addNode(pNodeD);
	pMap->addNode(pNodeE);
	pMap->addNode(pNodeF);
	pMap->addNode(pNodeG);
	pMap->addNode(pNodeH);
	
	pMap->setValueToMatrixForUndirectedGraph(0,1);
	pMap->setValueToMatrixForUndirectedGraph(0,3);
	pMap->setValueToMatrixForUndirectedGraph(1,2);
	pMap->setValueToMatrixForUndirectedGraph(1,5);
	pMap->setValueToMatrixForUndirectedGraph(3,6);
	pMap->setValueToMatrixForUndirectedGraph(3,7);
	pMap->setValueToMatrixForUndirectedGraph(6,7);
	pMap->setValueToMatrixForUndirectedGraph(2,4);
	pMap->setValueToMatrixForUndirectedGraph(4,5);
	
	pMap->printMatrix();

    cout<<endl;

	//pMap->depthFirstTraverse(0);
	//cout<<endl;
	pMap->breadthTraverse(0);
	
	
	
}