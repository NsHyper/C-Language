#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
    int i,pl;
    float bath[10],ath,mo;
    for (i=0;i<10;i++)
    {
        printf("Dose bathmo foititi No %d->",i+1);
        scanf("%f",&bath[i]);  // Καταχωρίζει στον πίνακα bath τους βαθμούς των 10 φοιτητών
    } 
    ath=0;  
    for (i=0;i<10;i++)
        ath=ath+bath[i];  // Στο ath προστίθενται όλοι οι βαθμοί των φοιτητών
    mo=ath/10;            // Υπολογίζει τον μέσο όρο
    for (i=0;i<10;i++)
        if (bath[i]>mo) printf("%f\n",bath[i]);  // Εμφανίζιε τους βαθμούς που είναι μεγαλύτεροι από τον μέσο όρο
    
	return 0;
}


