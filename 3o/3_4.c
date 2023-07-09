#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
	int a,b;
	float f;
	char ch;
	printf("%d %d %d\n",sizeof a,sizeof f,sizeof ch);
	scanf("%d %f %c",&a,&f,&ch);
	printf("%d %f %c\n",a,f,ch);
	
	return 0;	
}
