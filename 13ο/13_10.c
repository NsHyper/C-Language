#include <stdio.h>
#include <stdlib.h>

#define AR 3

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
	struct math m[25];
} tmimata[15];

void display(struct tmima tm[]);

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
       printf("\nOi %d m toy tmimatos\n",tmimata[i].ar_mat);
       printf("===============================\n"); 
       for (j=0;j<tmimata[i].ar_mat;j++)
       {
           printf("\nStoixia mathiti No:%d\n",j+1);
           printf("======================\n");
           printf("Eponymo:");
           gets(tmimata[i].m[j].eponymo);
           printf("Onoma:");
           gets(tmimata[i].m[j].onoma);
           printf("Bathmos:");
           scanf("%f",&tmimata[i].m[j].bathmos);
           printf("Ilikia:");
           scanf("%d",&tmimata[i].m[j].ilikia);
           getchar();
           printf("\n");
       }
       printf("\n\n");
    }
    display(tmimata);
    
    return 0;
}

void display(struct tmima tm[])
{
    int synolo_mathiton,i,j;
    float max_mo,mo[AR],sum;
    for (i=0;i<AR;i++)
	       synolo_mathiton=synolo_mathiton+tmimata[i].ar_mat;
	max_mo=0;       
    for (i=0;i<AR;i++)
	{
       sum=0;
       for (j=0;j<tmimata[i].ar_mat;j++)
       {
           sum=sum+tmimata[i].m[j].bathmos;
       }
       mo[i]=sum/tmimata[i].ar_mat;
       if (mo[i]>max_mo) max_mo=mo[i];
       printf("O mesos oros toy tmimatos %s einai %f\n",tmimata[i].titlos,mo[i]);
    }
    printf("\nTa tmimata me to megalytero meso oro %f\n",max_mo);
    for (i=0;i<AR;i++)
    {
        if (mo[i]==max_mo) puts(tmimata[i].titlos);
    }  
    printf("\nm me bathmo pano apo 18.5\n");
    printf("\n================================\n");
    for (i=0;i<AR;i++)
	{
       for (j=0;j<tmimata[i].ar_mat;j++)
       {
          if (tmimata[i].m[j].bathmos>=18.5) 
             puts(tmimata[i].m[j].eponymo);
       }
    }  
}

