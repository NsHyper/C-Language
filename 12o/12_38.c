#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_on_board(char th[][20],char onom[],int pl);

int main(void)
{
	char theseis[100][20],onoma[20];
	int i,plithos=0;
	while (plithos<100)
	{
		printf("Epibatis thesis %d:",plithos+1);
		gets(onoma);
		if (is_on_board(theseis,onoma,plithos))
		{
			printf("O %s yparxei idi\n",onoma);                                    
            continue;
		}                                       
		if (strcmp(onoma,"----")==0) break;
		strcpy(theseis[plithos],onoma);
		plithos++;
	}
	printf("\nLista epivaton\n");
	printf("--------------\n"); 
	for (i=0;i<plithos;i++)
	{
		printf("Thesi %d:%s\n",i+1,theseis[i]);
	} 
	
	return 0;
}

int is_on_board(char th[][20],char onom[],int pl)
{
	int i,found=0;
	for (i=0;i<pl;i++)
		if (strcmp(th[i],onom)==0)
		{
			found=1;
			break;                          
        }        
	return found;                      
}
