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
	//cout<<"���"<<endl;
	//0����٣�1������
	cout<<"p"<<"&&"<<"q"<<"�Ľ����:"<<(and(true, false) == 1 ? "��" : "��")<<endl;
	cout<<"p"<<"||"<<"q"<<"�Ľ����:"<<(or(true, false) == 1 ? "��" : "��")<<endl;
    cout<<"p"<<"->"<<"q"<<"�Ľ����:"<<(equal(true, false) == 1 ? "��" : "��")<<endl;
	cout<<"p"<<"<->"<<"q"<<"�Ľ����:"<<(condtion(true, false) == 1 ? "��" : "��")<<endl;
}




