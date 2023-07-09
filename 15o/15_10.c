#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char *argv[])
{
	FILE *fin;
	int cnt=0;
	char grammi[100];
    if (argc!=3)
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
        fgets(grammi,100,fin);
        if (strstr(grammi,argv[2])!=0)
        {
           cnt++;
           printf("%4d. %s",cnt,grammi);
        }   
       
    }
    fclose(fin);
    
    return 0;
}


