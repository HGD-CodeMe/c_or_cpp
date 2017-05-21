#include"Score.h"
int Score::sum()
{
	return computer+english+mathematics;
}
void Score::modify(int a,int b,int c)
{
	computer=a;
	english=b;
	mathematics=c;
}

