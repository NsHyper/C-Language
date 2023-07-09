#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int epivates,theseis;
    float pos;
    printf("Dose theseis kai epibates :");
    scanf("%d %d",&theseis,&epivates);
    pos=epivates*100.0/theseis;
    if (pos>=50)
       printf("Kerdos\n");
    else if (pos<30)
       printf("Zimia\n");

    
    return 0;
}
