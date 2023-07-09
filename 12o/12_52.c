#include <stdio.h> 
#include <stdlib.h> 
int main(void)
{
	int a[5][10][20],i,j,k;
	for (i=0;i<5;i++) 
		for (j=0;j<10;j++) 
			for (k=0;k<20;k++) 
				*(*(*(a+i)+j)+k)=rand();
	for (i=0;i<5;i++) 
		for (j=0;j<10;j++) 
			for (k=0;k<20;k++) 
				printf("%d ",*(*(*(a+i)+j)+k));
	return 0;
}

