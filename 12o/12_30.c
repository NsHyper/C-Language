#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

int func5(char *p,char ch);
char *func6(char *p, char ch);

int main(void)
{
	char a[10], *ptr;
	strcpy(a,"AIGAIO");
	printf("RES1=%d\n",func5(a,'A'));
	printf("RES2=%d\n",func5(a+5,'A'));
	ptr=func6(a,'G');
	if(ptr!=NULL)
		printf("To %c yparxei ston a\n",*ptr);
	return 0;
}	
int func5(char *p,char ch)
{
	int i=0,cnt=0;
	while(p[i] != '\0')
	{
		if(p[i] == ch)
			cnt++;
		i++;
	}
	return cnt;
}

char *func6(char *p, char ch)
{
	int i=0;
	while (p[i] != '\0')
	{
		if (p[i] == ch) 
			return &p[i];
		i++;
	}
	return NULL;
}
