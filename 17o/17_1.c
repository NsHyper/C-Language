#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	while(1)
	{
		printf("\nMenu: \n1. Dhmiourgia Pinaka\n2.Dhmiourgia Hello \n\nEpigogh: ");
		int n1=0;
		scanf("%d",&n1);
		switch (n1)
		{
		case 1:
    printf("Dwse poses theseis theleis na exei o pinakas: ");
    int n; 
    scanf("%d",&n);
    int *p;

    p = malloc(sizeof(int)*n); 
    if(!p)
    {
        printf("Apotuxia desmeusis mnh	mhs!");
        exit(2);
    }
    int i;
    srand(time(NULL));
    //Apothikesuh aritmwn...
    for (i=0;i<n;i++)
    {
        p[i] = rand()%10;
    }
    printf("\n");
    //Ektupwsh arithmwn...
    for (i=0;i<n;i++)
    {
        printf("p[%d] = %d\n",i,p[i]);
    }
    free(p);
    system("clear");
    break;

case 2: 
    printf("\nHello!!!!");	
    system("clear");
    break;
		
	default:
			break;
		}
		
	}
		

}