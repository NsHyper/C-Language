#include <stdio.h>
int main(void)
{
	int ar,ps1,ps2,ps3,ath;
	printf("Dose arithmo: ");
	scanf("%d",&ar);
	if (ar>=100 && ar<=999)
	{
		ps1=ar%10;
		ps2=(ar/10)%10;
		ps3=(ar/100)%10;
		ath=ps1+ps2+ps3;
		printf("Athroisma psifion=%d\n",ath);			
	}
	else
		printf("Lathos arithmos");		
	return 0;
}
