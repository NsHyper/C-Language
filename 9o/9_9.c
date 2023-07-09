#include <stdio.h> 
#include <stdlib.h> 

float dms(float y, float b);
void display(float d);

int main(void)
{
	float ypsos,baros;
	do
	{
     printf("Dose ypsos kai baros :");
     scanf("%f %f",&ypsos,&baros);
     if (ypsos==0 || baros==0) break;
     display(dms(ypsos,baros));
    } while (1);
    
    return 0;
}

float dms(float y, float b)
{
       float d; 
       d = b/(y*y);
       return d;
}

void display(float d)
{
     if (d<18.5)
       printf("Lipovaris\n");
    else if (d>=18.5 && d<25)
       printf("Kanonikos\n");
    else if (d>=25 && d<30)
       printf("Ypervaros\n");   
    else
       printf("Paxysarkos\n");   
}
