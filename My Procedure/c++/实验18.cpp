#include<iostream>
using namespace std;//为什么上面一个类不能定义一个输出函数 
class Guodao 
{
	public:
	float r;
	public:
	float money()
    {
 	return (((r+3)*(r+3)*3.14-r*r*3.14)*20); 
    }	
 };
 class Zhalan
 {
      Guodao guodao;
 	public:
 		void setR(float a);
 		float costmoney();
 		float getguodaomoney();
 		void print();
 	

 };
 float Zhalan::getguodaomoney()
 {
 	return guodao.money();
 }
  void Zhalan::setR(float a)
 {
  	guodao.r=a;
 } 
 float Zhalan::costmoney()
 {
 	return ((2*(guodao.r+3)*3.14)*35);
 }
 void Zhalan::print()
 {
 	cout<<"栅栏的造价: "<<costmoney()<<endl; 
 	cout<<"过道的造价: "<<getguodaomoney()<<endl;
 }
 main()
 {
 	Guodao guo;
 	Zhalan zha;
 	zha.setR(10);
      zha.print();
 }
