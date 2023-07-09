#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int **p,i,j,n;
	printf("Dose plithos fraseon:");
	scanf("%d",&n);
	getchar();     // Διαβάζει τον εναπομείναντα από τη scanf() χαρακτήρα \n 
	p=calloc(n,sizeof(char*));
	if (p==NULL)
	{
		puts("Den yparxei arketi mnimi");
        exit(1);
	}
	for (i=0;i<n;++i)
	{ 
   		p[i]=calloc(50,sizeof(char)); 
		if (p[i]==NULL)
		{
			puts("Den yparxei arketi mnimi");
	        exit(1);
		}
	}
	for (i=0;i<n;i++)
	{
        printf("Dose frasi %d ->",i+1);
		gets(p[i]);
    }	
	for (i=0;i<n;i++)
		puts(p[i]);
	
	for (i=0;i<n;++i)
   		free(p[i]); 
	free(p);
    
    return 0;
}

