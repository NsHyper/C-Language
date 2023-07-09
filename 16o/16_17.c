#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �������� ������������ ������ ��������
void print_it(char on[][30])
{
    int i;
    for (i=0;i<5;i++)
        puts(on[i]);
    printf("========================\n");
}

// ��������� ��������� �� ���� �� ����� ����� 
int comp_string(const void *a, const void *b)
{
	char *s1,*s2;
	s1=(char *)a;
	s2=(char *)b;
	while (*s1!=' ') s1++;
	while (*s2!=' ') s2++;
	s1++;
	s2++;
	return strcmp(s1,s2);		
}

int main(void)
{
    int i;
    char onom[5][30]={"MPAROBIOS KOSTAS","PINEZA MARIA","TEMPELXANAS BASILHS","ARAXROS NIKOS","SPASIKLA ANNA"};
    print_it(onom);
    qsort(onom,5, 30,comp_string);
    print_it(onom);
    return 0;
}
