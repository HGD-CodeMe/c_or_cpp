#include<iostream>
using namespace std;
class vechicle
{
	public:
		virtual void Run();
		virtual void Stop();
	private:
	    int MaxSpeed;
		int Weight;	
 }; 
 class bicycle: virtual public vechicle
 {
 	 public:
 	 	virtual void Run();
 	 	virtual void Stop();
 	 private:
	    int Height;	
 };
 class motorcar: virtual public vechicle
  {
 	 public:
 	 	virtual void Run();
 	 	virtual void Stop();
 	 private:
	    int SeatNum;	
 };
 class motorcycle: public bicycle,public motorcar
 {
 	 public:
 	 	virtual void Run();
 	 	virtual void Stop();
 };
 void vechicle::Run()
 {
 	cout<<"A vehicle is running!"<<endl;
 }
 void vechicle::Stop()
 {
 	cout<<"A vechicle has stoped!"<<endl;
 }
  void bicycle::Run()
 {
 	cout<<"A bicycle is running!"<<endl;
 }
 void bicycle::Stop()
 {
 	cout<<"A bicycle has stoped!"<<endl;
 }
 void motorcar::Run()
 {
 	cout<<"A motorcar is running!"<<endl;
 }
 void  motorcar::Stop()
 {
 	cout<<"A motorcar has stoped!"<<endl;
 }
 void motorcycle::Run()
 {
 	cout<<"A motorcycle is running!"<<endl;
 }
 void motorcycle::Stop()
 {
 	cout<<"A motorcycle has stoped!"<<endl;
 }
 main()
 {
 	vechicle * ptr;
 	vechicle a;
 	bicycle b;
 	motorcar c;
 	motorcycle d;
 	a.Run();
 	a.Stop();
 	b.Run();
 	b.Stop();
 	c.Run();
 	c.Stop();
 	d.Run();
 	d.Stop();
 	ptr=&a;
 	ptr->Run();
 	ptr=&b;
 	ptr->Run();
 	ptr=&c;
 	ptr->Run();
 	ptr=&d;
 	ptr->Run();
 }
