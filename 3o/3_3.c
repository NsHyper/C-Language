#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
	float a,b,c,mo,gin,sum;
	printf("Dose ton proto arithmo:");
	scanf("%f",&a);
	printf("Dose ton deytero arithmo:");
	scanf("%f",&b);
	printf("Dose ton trito arithmo:");
	scanf("%f",&c);
	mo=(a+b+c)/3;
	gin=a*b*c;
	sum=a+b+c;
	printf("To athroisma ton %f, %f, %f einai %f\n",a,b,c,sum);
	printf("To ginomeno ton %f, %f, %f einai %f\n",a,b,c,gin);
	printf("O mesos oros ton %f, %f, %f einai %f\n",a,b,c,mo);
	
	return 0;	
}
