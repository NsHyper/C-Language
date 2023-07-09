#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comp_string(const void *a, const void *b);

int main(void)
{
	int i,k,n,size;
	char onomata[50][30],*thesi;
	for(i=0;i<50;i++)
	{
		while (1)
		{
           printf("Dose onoma %d->",i+1);
           gets(onomata[i]);
           size=i;
           thesi=(char *)lfind(onomata[i],onomata,&size,30,comp_string);
           if (thesi!=NULL)
           {
              printf("to onoma yparxei dose kapoio allo\n");
              continue;                                
           }
           else
               break;
        }	
	}
	
	return 0;
}

int comp_string(const void *a, const void *b)
{
	char *s1,*s2;
	s1=(char *)a;
	s2=(char *)b;
	return strcmp(s1,s2);		
}

