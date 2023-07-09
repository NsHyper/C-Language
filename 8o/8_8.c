#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	double sum;
	for (a=1;a<=100;++a)
		sum=sum+1.0/a;
	printf("To athroisma einai %f\n",sum);
	
	return 0;
}


