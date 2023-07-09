#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{
	char o[50][20];
	int i,j;
	bool yparxei;
	for (i=0;i<50;i++)
    {
      do
      {
        printf("Dose onoma %d ->",i+1);
        gets(o[i]);
        yparxei=false;
        for (j=0;j<i-1;j++)
            if (strcmp(o[i],o[j])==0) yparxei=true;
        if (yparxei)
            printf("to onoma yparxei idi ston pinaka parakalo dose allo\n");
      } while (yparxei); 
    }
    
    return 0;
}



