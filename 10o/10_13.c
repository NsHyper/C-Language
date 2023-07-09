#include <stdio.h> 
#include <stdlib.h> 

int paragontiko(int x);

int main(void)
{
  int n;
  for (n=1;n<=10;n++)
    printf("%2d!= %d\n",n,paragontiko(n));
  
  return 0;
}

int paragontiko(int x)
{
	int i,pp=1;
	for (i=1;i<=x;i++) pp=pp*i;
	return pp;
}

