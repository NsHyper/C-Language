#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
	int ar;
	int ok,simeio,alarm;
	printf("Dose ariumo apo th syskevi:");
	scanf("%d",&ar);
	simeio=(ar&240)>>4;
	alarm=(ar&12)>>2;
	ok=(ar&2)>>1;
	if (ok==0)
	{
        printf("provlima sti syskevi\n");
        
        exit(1);
    }
    printf("Shmeio elegxoy: %d synagermos:",simeio+1);
    if (alarm==0)  printf("OK\n");     
    if (alarm==1)  printf("fotia\n");     
    if (alarm==2)  printf("paraviasi\n");   
    if (alarm==3)  printf("kapnos\n");         
    
    return 0;
}
