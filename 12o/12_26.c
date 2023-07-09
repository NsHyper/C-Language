#include <stdio.h> 
#include <stdlib.h> 

int convert(char *str, int sel);

int main(void)
{
	char lexi1[40]="PaRadeiGma1", lexi2[40]="paraDEIGma2";
    convert(lexi1,1);
    puts(lexi1);
    convert(lexi2,0);
    puts(lexi2);
	
	return 0;
}

int convert(char *str, int sel) 
{
	int cnt=0;
	while(*str!='\0')
	{
		if(*str>='a' && *str<='z' && sel==1) 
		{
			*str=*str-32;
			cnt++;
		}
		if(*str>='A' && *str<='Z' && sel==0) 
		{
			*str=*str+32;
			cnt++;
		}
		str++;
	}
	return cnt;
}

