#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
	int h,m,s;
	printf("Dose mera kai mina:");
	scanf("%d %d",&h,&m);
	if (m>2)
	   s=(m-1)*30-2+h;
	else
       s=(m-1)*30+h;    
    printf("Einai h %d mera toy etoys\n",s);        
    
    return 0;
}
