#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
    int i,pl;
    float bath[10],ath,mo;
    for (i=0;i<10;i++)
    {
        printf("Dose bathmo foititi No %d->",i+1);
        scanf("%f",&bath[i]);  // ����������� ���� ������ bath ���� ������� ��� 10 ��������
    } 
    ath=0;  
    for (i=0;i<10;i++)
        ath=ath+bath[i];  // ��� ath ������������ ���� �� ������ ��� ��������
    mo=ath/10;            // ���������� ��� ���� ���
    for (i=0;i<10;i++)
        if (bath[i]>mo) printf("%f\n",bath[i]);  // ��������� ���� ������� ��� ����� ����������� ��� ��� ���� ���
    
	return 0;
}


