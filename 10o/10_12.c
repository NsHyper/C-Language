#include <stdio.h> 
#include <stdlib.h> 
void plaisio(int yps, int pl, char ch, int fill);

int main(void)

{
  plaisio(7,8,'a',0);
  printf("\n");
  plaisio(5,4,'*',1);
  
  return 0;
}

void plaisio(int yps, int pl, char ch, int fill)
{ 
    
  int i, j;
  for (i=1; i<=pl; i++)
        printf("%c", ch);
  printf("\n");
  for (i=1; i<=yps-2; i++)
  {
        printf("%c", ch);
        for (j=1;j<=pl-2;j++)
        {
          if (fill)   
             printf("%c", ch);
          else
              printf(" ");
        }  
        printf("%c\n", ch);  
  }    
  for (i=1; i<=pl; i++)
        printf("%c", ch);
  printf("\n");  
}
