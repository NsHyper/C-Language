#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
	float a[100],ath,mo;
    int i;
 	for (i=0;i<100;i++)
		scanf("%f",&a[i]); // Καταχωρίζει στον πίνακα a τους αριθμούς που πληκτρολογεί ο χρήστης
	for (i=0;i<100;i++)
		ath=ath+a[i];  // Στο ath προστίθενται όλοι οι αριθμοί του πίνακα
	mo=ath/100;           // Υπολογίζει τον μέσο όρο 
	printf("Ο μεσος όρος είναι %f\n",mo);  
    
	return 0;
}


