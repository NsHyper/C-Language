#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	float *pin,sum,mo,temp;
	int i,k,plithos;
	fp=fopen("times.txt","r");
	if (fp==NULL)
	{
		printf("Problima sto anoigma toy arxeioy");
		
		exit(2);
	}
	fscanf(fp,"%d",&plithos);
	pin=calloc(plithos,sizeof(float));
	for(i=0;i<plithos;i++)
		fscanf(fp,"%f",&pin[i]);
	fclose(fp);
	for(i=0;i<plithos;i++)
		sum=sum+pin[i];
    mo=sum/plithos;
    // ταξινόμηση του πίνακα με φθίνουσα σειρά
    for(i=1;i<plithos;i++)
	  for(k=plithos-1;k>=i;k--)
	  {
    	if(pin[k]>pin[k-1])
		{
          temp=pin[k];
		  pin[k]=pin[k-1];
		  pin[k-1]=temp;
	    }
	  }
    printf("O mesos oros timon einai %6.3f\n",mo);
	for(i=0;i<plithos;i++)
		printf("%5.2f\n",pin[i]);
    
    return 0;
}

