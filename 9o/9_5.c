#include <stdlib.h>
#include <stdio.h>

void print_it1();
void print_it2();

int main(void)
{
	print_it1();  //��������� �� ����� 10 �����
	printf("----------------------\n");
	print_it2(4); //��������� �� ����� 4 �����
	
	return 0;
}


void print_it1()
{
	int i;
	for(i=1;i<=10;i++)
		printf("katanoiste ti glossa C\n");
}

void print_it2(int num)
{
	int i;
	for(i=1;i<=num;i++)
		printf("katanoiste ti glossa C\n");
}



