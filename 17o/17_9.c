#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct foititis
{
    int code;
    char onoma[20];
};

int main(void)
{
	int ar,i,*meli,j,cd;
	struct foititis **omades;
	bool found;
	printf("Dose arithmo omadon : ");
	scanf("%d",&ar);
	omades=malloc(ar*sizeof(struct foititis*));
	meli=malloc(ar*sizeof(int));
	for (i=1;i<=ar;i++)
    {
        printf("Dose arithmo melon omadas %d -> ",i);
        scanf("%d",&meli[i-1]);
        omades[i-1]=malloc(meli[i-1]*sizeof(struct foititis));
    }
    for (i=0;i<ar;i++)
    {
        printf("\nStoixeia omadas %d\n",i+1);
        printf("----------------------------------\n");
        for (j=0;j<meli[i];j++)
        {
            printf("Kodikos foititi %d: ",j+1);
            scanf("%d",&omades[i][j].code);
            fflush(stdin);
            printf("Onoma foititi   %d: ",j+1);
            scanf("%s",omades[i][j].onoma);
        }
    }
    for (i=0;i<ar;i++)
    {
        printf("\n###### Omada %d ######\n",i+1);
        printf("A/A Kodikos Onoma               \n");
        printf("=== ======= ====================\n");
        for (j=0;j<meli[i];j++)
            printf("%3d %7d %s\n",j+1,omades[i][j].code,omades[i][j].onoma);
    }
    printf("\nDose kodiko gia anazitisi:");
    scanf("%d",&cd);
    found=false;
    for (i=0;i<ar;i++)
    	for(j=0;j<meli[i];j++)
    	{
    		if (omades[i][j].code==cd)
    		{
    			printf("Omada %d\n",i+1);
    			found=true;
    		}
    	}
    if (!found)
    	printf("Den yparxei se kamia omada\n");
    for (i=0;i<ar;i++)
        free(omades[i]);
   	free(omades);
   	free(meli);
	return 0;
}






