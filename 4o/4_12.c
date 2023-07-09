#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
	int ar;
	printf("Dose arithmo :");
	scanf("%d",&ar);
	if (ar%2==0)
		printf("O arithmos %d einai zygos\n",ar);
	else
		printf("O arithmos %d einai monos\n",ar);
    
    return 0;
}
