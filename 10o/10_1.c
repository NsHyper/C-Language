#include <stdio.h>
#include <stdlib.h>
void set();
void pp();
float mo(int k, int l);
float a;
int x,y;

int main(void)
{
	int x,y;
	x=y=4;
	set();
	a=mo(x,y);
	pp();
	
	return 0;
}

void set()
{
	int aa;
	x=10;
	y=20;
}

void pp()
{
	int x,y;
	printf("a=%f\n",a);
}

float mo(int k,int l) 
{
	float mesos;
	mesos=(k+l)/2.0;
	return mesos;
}
