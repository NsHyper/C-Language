#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float ypsos,baros,dms;
    printf("Dose ypsos kai baros :");
    scanf("%f %f",&ypsos,&baros);
    dms = baros/(ypsos*ypsos);
    if (dms<18.5)
       printf("Lipovaris\n");
    else if (dms>=18.5 && dms<25)
       printf("Kanonikos\n");
    else if (dms>=25 && dms<30)
       printf("Ypervaros\n");   
    else
       printf("Paxysarkos\n");   
    
    return 0;
}
