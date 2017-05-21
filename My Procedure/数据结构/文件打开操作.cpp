#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct student
{
	char * number;
	char * name;
	int score;
}st[4]={{"1","zhu",98},{"2","li",89},{"3","zhang",78},{"4","zhou",94}},s;
main()
{
  fstream f1;
  f1.open("C:\\data.dat",ios::out|ios::in|ios::binary);
  if(!f1)
  {
  	cout<<"file can't open!"<<endl;
  	//return;
  }
  for(int i=0;i<4;i++)
      f1.write((char *)&st[i],sizeof(student));
  f1.seekp(sizeof(student)*2);
  f1.read((char *)&s,sizeof(student));
  cout<<s.name<<s.number<<s.score<<"\t";
  f1.seekp(sizeof(student)*0);
  f1.read((char *)&s,sizeof(student));
  cout<<s.name<<s.number<<s.score<<"\t";
  f1.seekp(sizeof(student)*1,ios::cur);
  f1.read((char *)&s,sizeof(student));
  cout<<s.name<<s.number<<s.score<<"\t";
  f1.seekp(sizeof(student)*0,ios::cur);
  f1.read((char *)&s,sizeof(student));
  cout<<s.name<<s.number<<s.score<<"\t";        
}
