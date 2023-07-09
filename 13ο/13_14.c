#include <stdio.h>
#include <string.h>

struct mathima
{
	char onomasia[20];
	float bathmos;
	char examino;
};

int main(void)
{
	struct mathima m1,m2,*p1,*p2;
	p1=&m1;
	strcpy(m1.onomasia,"Programmatismos II");
	m1.bathmos=8.5;
	m1.examino='B';
	printf("Onomasia: %s\n",p1->onomasia);
	printf("Bathmos : %4.1f\n",p1->bathmos);
	printf("Examino : %c\n",p1->examino);
	p2=&m2;
	printf("Dose mathima :");
	gets(p2->onomasia);
	printf("Dose bathmo :");
	scanf("%f",&p2->bathmos);
	fflush(stdin); 
	printf("Dose examino :");
	scanf("%c",&p2->examino);
	printf("Onomasia: %s\n",m2.onomasia);
	printf("Bathmos : %4.1f\n",m2.bathmos);
	printf("Examino : %c\n",m2.examino);
	return 0;
}

