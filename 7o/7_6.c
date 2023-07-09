#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int etos;
	printf("Dose etos:");
	scanf("%d",&etos);
	if(etos%4 == 0)
	{
		if(etos%100 == 0)
		{
			if(etos%400 == 0)
				printf("Disekto\n");
			else
				printf("Kanoniko\n");
		}
		else 
		     printf("Disekto\n");
	}
	else 
	{
		printf("Kanoniko\n");
	}
	
	return 0;
}


