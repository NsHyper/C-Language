#include <stdio.h>
int main(void)
{
	int h24,h12,lepta;
	printf("Dose ora se 24ori basi: ");
	scanf("%d:%d",&h24,&lepta);
	if (h24>23||h24<0||lepta<0||lepta>59)
	{
		printf("Lathos ora\n");
		exit(1);
	}
	if (h24>=12)
	{
		h12=h24-12;
		if (h12==0) h12=12;
		printf("%d:%dmm\n",h12,lepta);		
	}
	else
	{
		if (h24==0)
			h12=12;
		else
			h12=h24;
		printf("%d:%dpm\n",h12,lepta);		
	}
	return 0;
}
