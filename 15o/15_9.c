#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
	FILE *fin;
	int cnt=0;
	char ch;
    if (argc!=2)
	{
		printf("Lathos plithos parametron\n");
		exit(2);
	}
	fin=fopen(argv[1],"r");
	if (fin==NULL)
	{
        printf("Provlima sto arxeio eisodoy\n");
        exit(2);
    }
    while (!feof(fin))
    {
        ch=fgetc(fin);
        cnt++;  
    }
    fclose(fin);
    printf("To arxeio %s exei %d xaraktires\n",argv[1],cnt);
	
	return 0;
}


