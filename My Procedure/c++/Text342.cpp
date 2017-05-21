#include<iostream>
using namespace std;

//与运算
bool and(bool p, bool q)
{
	return p && q;
}

//或运算
bool or(bool p, bool q)
{
	return p || q;
}

//等价运算
bool equal(bool p, bool q)
{
	return !p || q;
}

//条件运算
bool condtion(bool p, bool q)
{
	return (!p || q) || (p || !q);
}

main()
{
	//cout<<"你好"<<endl;
	//0代表假，1代表真
	cout<<"p"<<"&&"<<"q"<<"的结果是:"<<(and(true, false) == 1 ? "真" : "假")<<endl;
	cout<<"p"<<"||"<<"q"<<"的结果是:"<<(or(true, false) == 1 ? "真" : "假")<<endl;
    cout<<"p"<<"->"<<"q"<<"的结果是:"<<(equal(true, false) == 1 ? "真" : "假")<<endl;
	cout<<"p"<<"<->"<<"q"<<"的结果是:"<<(condtion(true, false) == 1 ? "真" : "假")<<endl;
}




