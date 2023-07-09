#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int i;
	char epon[30],onom[30],maxonom[30],maxepon[30];
	float b1,b2,b3,mo,maxmo;
	FILE *fp;
	fp=fopen("bathmoi.txt","r");
	fscanf(fp,"%s %s %f %f %f",epon,onom,&b1,&b2,&b3);
	mo=(b1+b2+b3)/3;
	maxmo=mo;
	strcpy(maxepon,epon);
	strcpy(maxonom,onom);
	for(i=2;i<=100;i++)
	{
		fscanf(fp,"%s %s %f %f %f",epon,onom,&b1,&b2,&b3);
	    mo=(b1+b2+b3)/3;
		if(mo>maxmo)
        {
           maxmo=mo;
           strcpy(maxepon,epon);
	       strcpy(maxonom,onom);
        }   
	}
	fclose(fp);
	printf("%s %s\n",maxepon,maxonom);
    
    return 0;
}


