#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 50    //��������� �� ������ ��� �����

int main(void)
{
	int i,j,k,bathmoi[SIZE][10],min,max,ath;
	char xores[SIZE][30],temp[30];
	float mo[SIZE],tm;
	for(i=0;i<SIZE;i++)           // �������� �� ������� ��� �����
	{
		printf("Dose onoma xoras %d->",i+1);
        gets(xores[i]);	
	}
	for(i=0;i<SIZE;i++)          // �������� ���� ������� ���� �����
	{
		printf("Dose bathmoys xoras %s\n",xores[i]);
        for (j=0;j<10;j++)
        {
            printf("Vathmos %d -> ",j+1);
            scanf("%d",&bathmoi[i][j]);	
        }    
	}
	for(i=0;i<SIZE;i++)           // ���������� ��� ���� ��� ��� ������ ���� �����
	{
		min=max=bathmoi[i][0];
		ath=0;
        for (j=0;j<10;j++)
        {
            ath=ath+bathmoi[i][j];
            if (bathmoi[i][j]>max) max=bathmoi[i][j]; // ������� ��� ������� ����� ���� �����
            if (bathmoi[i][j]<min) min=bathmoi[i][j]; // ������� ��� �������� ����� ���� �����
        }   
        mo[i]=(ath-min-max)/8.0;                      // ���������� �� ���� ��� ��� ������ ���� �����
	}
    for(i=1;i<SIZE;i++)
	{
	 for(k=SIZE-1;k>=i;k--)
	 {
    	if(mo[k]>mo[k-1])
		{
          tm=mo[k];
          mo[k]=mo[k-1];
          mo[k-1]=tm;
          strcpy(temp,xores[k]);
		  strcpy(xores[k],xores[k-1]);
		  strcpy(xores[k-1],temp);
	    }
	 }
    }
    for(i=0;i<SIZE;i++)
	{
		printf("%10s %5.1f\n",xores[i],mo[i]); 
	}
	
	return 0;
}


