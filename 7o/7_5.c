#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,b;
	char ch;
	a=ch=getchar();
	if(ch>=65 && ch<='D')
	{
		switch(ch)
		{
			case 65:
				b=++a;
				++b;
				break;
			case 66:
				b=a--;		
			default:
				b=a+5;
		}
		printf("a=%d b=%d ch=%c\n",a,b,ch);
	}
	else if(ch=='*')
	{
		a=b=ch-1;
		printf("***%d*****%d*******\n",a,b);
	}
	
	return 0;
}


