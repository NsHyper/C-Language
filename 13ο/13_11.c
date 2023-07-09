#include <stdio.h>
#include <string.h>

union ar_kykl
{
	char all[8];
	struct 
	{
		char polis[3];
		char pavla;
		char num[4];
	} details;
};

int main(void)
{
	union ar_kykl mycar;
	strcpy(mycar.all,"MYA-3465");
	puts(mycar.details.num);	
	return 0;
}
