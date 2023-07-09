#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int b[50][3],i,j,pl_ap=0,pl_ar=0;
	float sum,mo;
	for (i=0;i<50;i++)
	{
        printf("Mathitis %d\n",i+1);
        printf("--------------\n");
        for (j=0;j<3;j++)
        {
            printf("Mathima %d:",j+1);
            scanf("%d",&b[i][j]);
        } 
    } 
    
    for (i=0;i<50;i++)
	{
        sum=0;
        for (j=0;j<3;j++) sum=sum+b[i][j];
        mo=sum/3;
        if (mo>=18.5) pl_ar++;
        if (mo<9.5) pl_ap++;    
    }    
    printf("Plithos apotyxonton: %d  %5.2f%%\n",pl_ap,pl_ap*100/50.0);
    printf("Plithos aristoyxon: %d  %5.2f%%\n",pl_ar,pl_ar*100/50.0);
    
    return 0;
}



