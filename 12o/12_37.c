#include <stdio.h>
#include <stdlib.h>
#define PLHTHOS 100 //Αλάξτε το πλήθος σε μικροτερο αριθμό ωστε να δοκιμασετε το προγραμμα

void display_synolo_paravaseon(char ak[][10], int pr[][12],int sp[]);
void display_10_top(char ak[][10], int sp[]);
void display_minimum(char ak[][10], int sp[]);

int main(void)
{
	char ar_kykl[PLHTHOS][10];
	int par[PLHTHOS][12],syn_par[PLHTHOS],i,j;
	for (i=0;i<PLHTHOS;i++)
	{
		printf("Dose arithmos kykloforias %d :",i+1);
		gets(ar_kykl[i]);
	} 
    
	for (i=0;i<PLHTHOS;i++)
	{
		printf("\nAytokinito %s\n",ar_kykl[i]);
		printf("-----------------\n");
		for (j=0;j<12;j++)
		{
			printf("Paravaseis minos %d:",j+1);
			scanf("%d",&par[i][j]);
		} 
	} 
	display_synolo_paravaseon(ar_kykl,par,syn_par);
	display_10_top(ar_kykl,syn_par);
	display_minimum(ar_kykl,syn_par);
    
    return 0;
}

void display_synolo_paravaseon(char ak[][10], int pr[][12], int sp[])
{
	int i,j,sum;
	printf("Ar. Kikl    Parab\n");
	printf("----------  -----\n");
	for (i=0;i<PLHTHOS;i++)
	{
		sum=0;
		for (j=0;j<12;j++)
		{
			sum=sum+pr[i][j];
		}
		sp[i]=sum; 
		printf("%10s  %5d\n",ak[i],sum);
	} 
}

void display_10_top(char ak[][10], int sp[])
{
	int i;
	printf("\nTOP-10\n\n");
	printf("Ar-Kykl     Parab\n");
	printf("----------  -----\n");
	for (i=0;i<PLHTHOS;i++)
	{
		if (sp[i]>10) printf("%10s  %5d\n",ak[i],sp[i]);
	} 
}

void display_minimum(char ak[][10], int sp[])
{
	int i,min;
	printf("\nMinimum Parabaseis \n\n");
	printf("Ar-Kykl.    Parab\n");
	printf("----------  -----\n");
	min=sp[0];
	for (i=0;i<PLHTHOS;i++)  
		if (sp[i]<min) min=sp[i];
	for (i=0;i<PLHTHOS;i++)
		if (sp[i]==min) printf("%10s  %5d\n",ak[i],sp[i]);
}

