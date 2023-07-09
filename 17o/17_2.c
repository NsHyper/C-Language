#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,ar,*pin;
	printf("Dose plithos:");
	scanf("%d",&ar);
	pin=calloc(ar,sizeof(int));
	for(i=0;i<ar;i++)
	{
		scanf("%d",&pin[i]);
	}
	// Με την επόμενη πρόταση ο δείκτης pin δείχνει σε διπλάσιο χώρο από ότι πριν
	pin=realloc(pin,2*ar*sizeof(int)); 
    
    return 0;
}

