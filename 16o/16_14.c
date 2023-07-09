#include <stdio.h>
#include <stdlib.h>

void display_syxna(int p[100]);

int main(void)
{
	int numera[100],i;
	srand(time(NULL));
	// ������� �� ������ numera[] �� �������� �������� ��� �� 0 ����� �� 36
	for (i=0;i<100;i++)
	{
	    numera[i]=rand()%37;
	    printf("%4d",numera[i]);
    }  
	display_syxna(numera);    
	
	return 0;
}

void display_syxna(int p[100])
{
   int numbers[37],i,max;
   for (i=0;i<36;i++) numbers[i]=0; // ��������� ��� ������ numbers[]
   for (i=0;i<100;i++)
       numbers[p[i]]++;             // ������� �� �� ������� ������� ��� ���������� ���� ��� ������ numbers[]
   max=numbers[0];
   for (i=0;i<36;i++) 
       if (numbers[i]>max) max=numbers[i];  // ������� ��� ���������� ��� ������ numbers[]
   printf("\nTa parakatvn noymera einai ta pio syxna! %d fores to kathena\n",max);    
   for (i=0;i<36;i++)    
       if (numbers[i]==max) printf("%d\n",i);  
       
}
