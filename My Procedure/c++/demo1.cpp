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
	//0代表假，1代表真
	cout<<and(true, false);
	cout<<or(true, false);
	cout<<equal(true, false);
	cout<<condtion(true, false);
}




