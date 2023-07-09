#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a[100];
    int i;
    scanf("%f",&a[0]); // Διαβάζει και καταχωρίζει τον πρώτο αριθμό που πληκτρολογεί ο χρήστης
 	for (i=1;i<100;i++)
 	{
        do
        {
    		scanf("%f",&a[i]);
		    if  (!(a[i]>=a[i-1])) printf("prepei na einai >= apo to proigoymeno poy edoses");
        } while (!(a[i]>=a[i-1]));
    }

	return 0;
}


