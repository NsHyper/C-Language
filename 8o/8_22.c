#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
	int cnt=0;
	bool mesa=false;
	char ch;
	do
	{
		ch=getchar();
		if (ch==EOF) break;
		if (ch!=' ' && ch!='\n' && mesa==false)
		{
            cnt++;
            mesa=true;
        }         
		if (ch==' ' || ch=='\n' && mesa==true)
		    mesa=false;         
	} while (ch!=EOF);
	printf("Edoses %d lexeis\n",cnt);
	
	return 0;
}


