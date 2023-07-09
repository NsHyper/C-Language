#include <stdio.h> 
#include <stdlib.h> 

int add(int x, int y);
int gin(int x, int y);
void out(int aa, int gg);

int main(void)
{
	int m,n,a,g;
	scanf("%d %d",&m,&n);
	a=add(m,n);
	g=gin(m,n);
	out(a,g);
	
	return 0;
}
int add(int x, int y)
{
	return x+y;
}
int gin(int x, int y)
{
	return x*y;
}
void out(int aa, int gg)
{
	printf("Athroisma=%d Ginomeno=%d \n",aa,gg);
}


  
