#include<iostream>
using namespace std;
class Term
{
    public:
	   float coef;
	   int expn;
	   Term *next;
};
class Poly
{
   public:
       Poly()
	   {
		   L=new Term;
		   L->next=NULL;
	   }
       ~Poly();
       Poly(const Poly&);
	   void CreatPoly();
	   void displayPoly();
	   int getlen();
	   friend void addPoly(Poly &,Poly &);
   private:
	   Term *L;
};
Poly::Poly(const Poly &p1)
{
	L=new Term;
	Term *p=L,*r=p1.L->next;
	while(r)
	{
		p->next=new Term;
		p->next->coef=r->coef;
		p->next->expn=r->expn;
		p=p->next;
		r=r->next;
	}
	p->next=NULL;
}
Poly::~Poly()
{
	Term *p;
	while(L)
	{
		p=L->next;
		delete L;
		L=p;
	}
}
void Poly::CreatPoly()
{
	Term *p=L,*q;
	int n;
	cout<<"请输入项数："<<endl;
	cin>>n;
	cout<<"请输入多项式："<<endl;
	for(int i=0;i<n;i++)
	{
		q=new Term;
		cin>>q->coef;
		cin>>q->expn;
		p->next=q;
		p=q;
	}
	p->next=NULL;
}
void addPoly(Poly &p1,Poly &p2)
{
	Term *ha=p1.L,*hb=p2.L;
	Term *pa=ha->next,*pb=hb->next;
	while(pa&&pb)
	{
		if(pa->expn<pb->expn)
		{
			ha=pa;
			pa=pa->next;
		}
		else if(pa->expn>pb->expn)
		{
			ha->next=pb;
			hb->next=pb->next;
			pb->next=pa;
			pb=hb->next;
			ha=ha->next;
		}
		else
		{
			if(pa->coef+pb->coef!=0.0)
			{
				pa->coef=pa->coef+pb->coef;
				ha=pa;
			}
			else
			{
				ha->next=pa->next;
				delete pa;
			}
			hb->next=pb->next;
			delete pb;
			pa=ha->next;
			pb=hb->next;
		}
	}
	if(pb)
		ha->next=pb;
	delete hb;
}
int Poly::getlen()
{
	Term *p=L->next;
	int len=0;
	while(p!=NULL)
	{
		p=p->next;
		len++;
	}
	return len;
}
void Poly::displayPoly()
{
   Term *p=L->next;
   cout<<"这个多项式是："<<endl;
   while(p->next!=NULL)
   {
	   if(p->expn==0)
	   {
		   cout<<p->coef;
		   if(p->next->coef>=0)
			   cout<<"+";
	   }
	   else
	   {
		   cout<<p->coef<<"x"<<p->expn;
		   if(p->next->coef>=0)
			   cout<<"+";
	   }
	   p=p->next;
   }
   cout<<p->coef<<"X"<<p->expn<<endl;
}
main()
{
	Poly p1,p2,p3,p4,p5;
	p1.CreatPoly();
	p1.displayPoly();
	p2.CreatPoly();
    p2.displayPoly(); 
	cout<<"p1+p2：";
	addPoly(p1,p2);
	p1.displayPoly();
	
}


