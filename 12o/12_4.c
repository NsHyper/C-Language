#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
	float a[100],ath,mo;
    int i;
 	for (i=0;i<100;i++)
		scanf("%f",&a[i]); // ����������� ���� ������ a ���� �������� ��� ������������ � �������
	for (i=0;i<100;i++)
		ath=ath+a[i];  // ��� ath ������������ ���� �� ������� ��� ������
	mo=ath/100;           // ���������� ��� ���� ��� 
	printf("� ����� ���� ����� %f\n",mo);  
    
	return 0;
}


