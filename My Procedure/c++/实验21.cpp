#include<iostream>
#include<typeinfo>
#include<string.h>
using namespace std;
class Complex
{
	private:
		int  a,b,i;
	public:
	    Complex();
		Complex(int x,int y);
		friend Complex operator+(Complex & c1,int i);
		friend Complex operator+(int i,Complex & c1);
	    void print();
 };
 Complex operator+ (Complex & c1,int i)
 {
 	return Complex(c1.a+i,c1.b);
 };
 Complex operator+ (int i,Complex & c1)
 {
 	return Complex(c1.a+i,c1.b);
 };
 Complex::Complex()
 {
 	a=b=0;
 }
 Complex::Complex(int x,int y)
 {
 	a=x;
 	b=y;
 }
void Complex::print()
{
    cout<<"c2µÄÖµÎª£º"<<"("<<a<<","<<b<<")"<<endl; 
}
main()
{
	Complex c1(10,2),c2,c3;
	int i;
	cin>>i;
	c2=c1+i;
	c3=i+c1;
	c2.print();
	c3.print();
}
  
