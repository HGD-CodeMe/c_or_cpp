#include<iostream>
using namespace std;

//������
bool and(bool p, bool q)
{
	return p && q;
}

//������
bool or(bool p, bool q)
{
	return p || q;
}

//�ȼ�����
bool equal(bool p, bool q)
{
	return !p || q;
}

//��������
bool condtion(bool p, bool q)
{
	return (!p || q) || (p || !q);
}

main()
{
	//0����٣�1������
	cout<<and(true, false);
	cout<<or(true, false);
	cout<<equal(true, false);
	cout<<condtion(true, false);
}




