#include<iostream>
#include<cmath>;
using namespace std;
class Triangle
{
	public:
	void setTriangle(float x,float y,float z);
	float getArea();
	int getPerimeter();
	void show();
	private:
	int a,b,c;	
};
void Triangle::setTriangle(float x,float y,float z)
{
	a=x;
	b=y;
	c=z;
}
float Triangle::getArea()
{
	float s;
	s=(a+b+c)/2.0;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
int Triangle::getPerimeter()
{
  return a+b+c;	
}
void Triangle::show()
{
	cout<<a<<b<<c<<endl;
	cout<<"三角形面积"<<getArea()<<endl;
	cout<<"三角形周长"<<getPerimeter()<<endl; 
}
main()
{
	Triangle t1;
	t1.setTriangle(7,8,9);
	t1.show();
}
