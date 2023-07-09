#include <stdio.h> 
#include <stdlib.h> 


float fpa(float p, int k);

int main(void) 
{
	int i,kat_fpa,plithos;
	float timi,synoliko_kostos=0,synoliko_fpa=0,poso,poso_fpa;
 
    for (i=1;i<=10;i++)
    {
        printf("Dose plithos timi kai katigoria FPA gia to proion %d >",i);
        scanf("%d %f %d",&plithos,&timi,&kat_fpa);
        poso=plithos*timi;
        poso_fpa=fpa(poso,kat_fpa);
        synoliko_fpa=synoliko_fpa+poso_fpa;
        synoliko_kostos=synoliko_kostos+poso+poso_fpa;
    }
    printf("Synolikko kostos: %f\n",synoliko_kostos);
    printf("Synoliko fpa: %f\n",synoliko_fpa);
    
    return 0;
}

float fpa(float p, int k)
{
    float poso_fpa=0;
    switch(k)
    {
        case 1:
             poso_fpa=0;
             break;
        case 2:     
             poso_fpa=p*0.06;
             break;
        case 3:
             poso_fpa=p*0.13;
             break;
        case 4:     
             poso_fpa=p*0.19;
             break;
        default:
             printf("Lathos kathgoria FPA\n");         
    }
    return poso_fpa;
}
