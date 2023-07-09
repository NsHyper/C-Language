#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char o[10][20];
	int i;
	for (i=0;i<10;i++)
    {
        printf("Dose onoma %d ->",i+1);
        gets(o[i]);
    }
    for (i=0;i<10;i++)
        printf("%c %c\n",o[i][0],o[i][strlen(o[i])-1]);
    
    return 0;
}



