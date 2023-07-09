#include <stdio.h>
#include <stdlib.h>

#define AR 15

struct math
{
	char eponymo[30];
	char onoma[20];
	float bathmos;
	int ilikia;
};

struct tmima
{
	char titlos[3];
	int ar_mat;
	struct math mathites[25];
} tmimata[15];


int main(void)
{
	int i,j;
	for (i=0;i<AR;i++)
	{
       printf("Stoixia tmimatos No:%d\n",i+1);
       printf("=======================\n");
       printf("Titlos tmimatos:");
       gets(tmimata[i].titlos);
       printf("Plhthos mathiton:");
       scanf("%d",&tmimata[i].ar_mat);
       getchar();
       printf("\nOi %d mathites toy tmimatos\n",tmimata[i].ar_mat);
       printf("===============================\n"); 
       for (j=0;j<tmimata[i].ar_mat;j++)
       {
           printf("\nStoixia mathiti No:%d\n",j+1);
           printf("======================\n");
           printf("Eponymo:");
           gets(tmimata[i].mathites[j].eponymo);
           printf("Onoma:");
           gets(tmimata[i].mathites[j].onoma);
           printf("Bathmos:");
           scanf("%f",&tmimata[i].mathites[j].bathmos);
           printf("Ilikia:");
           scanf("%d",&tmimata[i].mathites[j].ilikia);
           getchar();
           printf("\n");
       }
       printf("\n\n");
    }
    
    return 0;
}


