#include <stdlib.h>
#include <stdio.h>

float calc(int a, float b, float c);

int main(void)
{
	printf("Athr=%f\n",calc(1,5,10)); //Υπολογισμός 5+10
	printf("Gin=%f\n",calc(2,5,10));  //Υπολογισμός 5*10
	printf("Mo=%f\n",calc(3,5,10));   //Υπολογισμός μέσου όρου των 5 και 10
	printf("xxx=%f\n",calc(4,5,10));  //Δεν προσδιορίζεται πράξη
	
	return 0;
}


float calc(int a, float b, float c)
{
	switch(a)
	{
		case 1:
			return b+c;
			break;
		case 2:
			return b*c;
			break;
		case 3:
			return (b+c)/2;
			break;
		default:
			printf("Antikanoniki ektelesi synartisis\n");
			
			exit(1);
	}
}
