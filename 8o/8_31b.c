#include <stdio.h> 
#include <stdlib.h> 

int main(void) 
{
	float b1,b2,b3,mo;
    do
    {
	    scanf("%f %f %f",&b1,&b2,&b3);
	    if (b1==0 && b2==0 && b3==0) break;
		mo=(b1+b2+b3)/3;
	    if (mo>=5)
		{
	    	printf("Perases!!!\n");
			printf("Mesos oros %f\n",mo);
		}
		else
		{
			printf("Kopikes!!!\n");
			printf("Mesos oros %f\n",mo);
		}
      } while (1);
      printf("Telos\n");
      return 0;
}
