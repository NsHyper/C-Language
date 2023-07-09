#include <stdio.h>
#include <stdlib.h>
//Digits
void two_digits(int number);
void three_digits(int number);
void four_digits(int number);
//Asterisks
void show(int number);


//Main...
int main(int argc,char *argv[])
{
    printf("Dwse enan arithmo: "); 
    int number=0;
    scanf("%d",&number);
    
    //0-99
    if(number >=0 && number <= 99)
    {
        two_digits(number);
    }
    //100-999
    else if(number >=100 && number <=999)
    {
        three_digits(number);
    }
    //1000-999.999
    else if(number >=1000 && number <=999999)
    {
        four_digits(number);
    }
    return 0;
}
void two_digits(int number)
{
    if(number <= 9)
    {
        show(number); 
        printf("\n\n");
    }
    else if(number >=10)
    {
        show(number%10);
        printf("\n");
        show((number/10)%10);
        printf("\n\n");
    }
}
void three_digits(int number)
{
    show(number%10);
    printf("\n");
    show((number/10)%10);
    printf("\n");
    show((number/100)%10);
    printf("\n\n");
}
void four_digits(int number)
{
    show(number%10);
    printf("\n");
    show((number/10)%10);
    printf("\n");
    show((number/100)%10);
    printf("\n");
    show((number/1000)%10);
    printf("\n\n");
}
void show(int number)
{
    int i;
    for(i=1;i<=number;i++)
        printf("*");
}