#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stoixeia
{
	char onoma[15];
	char ar_mitr[5];
	float bathmos;
};

// Εμφάνιση περιεχομένων πίνακα δομών στοιχεία
void print_it(struct stoixeia f[5])
{
    int i;
    for (i=0;i<5;i++)
        printf("%-15s %-6s %5.2f\n",f[i].onoma,f[i].ar_mitr,f[i].bathmos);
    printf("============================\n");
}

// Συνάρτηση σύγκρισης μεταβλητών δομής stoixeia με βάση το όνομα και τον αριθμό μητρώου
int comp_struct1(const void *a, const void *b)
{
	struct stoixeia *p1,*p2;
	p1=a;
	p2=b;
	if (strcmp(p1->onoma,p2->onoma)==0 && strcmp(p1->ar_mitr,p2->ar_mitr)==0) 
		return 0;	
	else
		return 1;
}

int main(void)
{
    int size;
    struct stoixeia *thesi,find;
    struct stoixeia foitites[5]={	"Nikos","ct102",8.5,
									"Takis","sa345",9.0,
									"Anna","ct123",4.5,
									"Maria","sa561",6.0,
									"Basilis","ct001",3.0};
    print_it(foitites);
    printf("Dose onoma foititi:");
    gets(find.onoma);
    printf("Dose arithmo mitrooy:");
    gets(find.ar_mitr);
    size=5;
    thesi=(struct stoixeia *)lfind(&find,foitites,&size,sizeof(struct stoixeia),comp_struct1);
    if (thesi==NULL)
       printf("O foititis den brethike ston pinaka\n");
    else
       printf("Baumos foititi: %4.1f\n",thesi->bathmos);
       
    return 0;
}
