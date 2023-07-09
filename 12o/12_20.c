#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char onomata[10][20],ch;
	int i;
	for (i=0;i<10;i++)
	{
       printf("Dose onoma %d :",i+1);
       gets(onomata[i]);    
    }
    printf("\nDose arxiko xaraktira:");
    scanf("%c",&ch);
    printf("\nTa onomata poy arxizoyn apo %c einai:\n",ch);
    for (i=0;i<10;i++)
	{
       if (onomata[i][0]==ch) puts(onomata[i]);
    }
    
    return 0;
}




