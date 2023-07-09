#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
	float y,b,dms;
    printf("Dose ypsos kai baros :");
    scanf("%f %f",&y,&b);
    dms = b/(y*y);
    printf("O DMS me ypsos %f kai baros %f einai: %f\n",y,b,dms);
    
	return 0;    
}
