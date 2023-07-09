#include <stdio.h>
#include <stdlib.h>


// Εμφάνιση περιεχομένων πίνακα 
void print_it(int p[][5])
{
    int i,j;
    for (i=0;i<10;i++)
    {
        for (j=0;j<5;j++)
			printf("%7d",p[i][j]);
		putchar('\n');
	}
    printf("===================================\n");
}

int compfunc1(const void *a, const void *b)
{
	int *p1,*p2;
	p1=(int *)a;
	p2=(int *)b;
	if (*p1>*p2)
		return 1;
	else if (*p1<*p2)
		return -1;
	else 
		return 0;	
}

int compfunc2(const void *a, const void *b)
{
	int *p1,*p2;
	p1=(int *)a;
	p2=(int *)b;
	if (*p1<*p2)
		return 1;
	else if (*p1>*p2)
		return -1;
	else 
		return 0;	
}

int main(void)
{
    int i,j,*thesi,num;
    int a[10][5];
    for (i=0;i<10;i++)
        for (j=0;j<5;j++)
			a[i][j]=rand();
	print_it(a);
    for (i=0;i<10;i++)
      qsort(a[i],5,sizeof(int),compfunc1);
    print_it(a);
    qsort(a,50,sizeof(int),compfunc2);
    print_it(a);
    printf("Dose arithmo gia anazitisi:");
	scanf("%d",&num);
	thesi=(int *)bsearch(&num,a,50,sizeof(int),compfunc2);
	if (thesi==NULL)
		printf("O arithmos den brethike\n");
	else
		printf("O arithmos brethike sti thesi %d\n",(thesi-a[0]));
	return 0;
}
