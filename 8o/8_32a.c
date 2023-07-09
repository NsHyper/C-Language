#include <stdio.h> 
#include <stdlib.h> 

int main(void) 
{
	int i,j;
	i=1;
	arxi1:
	if (i>5) goto telos1;
	j=1;
	arxi2:
	if (j>5) goto telos2;
	if ((i+j)%2==0) goto edo;
	if (i*j>=16) goto telos2;
	printf("%d %d\n",i,j);
	edo:
	j++;
	goto arxi2;
	telos2:
	printf("=======\n");
	i++;
	goto arxi1;
	telos1:
	printf("Telos\n");
    return 0;
}
