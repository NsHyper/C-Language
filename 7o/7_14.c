#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float milia,litra,kat;
    printf("Dose milia kai litra :");
    scanf("%f %f",&milia,&litra);
    kat=litra/milia;
    if (kat<=0.9)
       printf("Poli xamili\n");
    else if (kat<=1.2)
       printf("Xamili\n");
    else if (kat<=1.8)
       printf("Kanoniki\n");
    else
       printf("Ypsili\n");
    
    return 0;
}
