#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
	int deyter,ores,lepta,sec;
	printf("Dose deyterolepta :");
	scanf("%d",&deyter);
	ores=deyter/3600;
	lepta=(deyter-ores*3600)/ 60;
	sec=deyter%60;
	printf("Ta %d deyterolepta einai:\n",deyter);
	printf("%d ores %d lepta kai %d deyterolepta\n",ores,lepta,sec);
    
    return 0;
}
