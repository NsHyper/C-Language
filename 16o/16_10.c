#include <stdio.h>
#include <stdlib.h>

int insert(int pin[],int n, int ar)
{
    int i,thesi=0;
    if (n>=100) return n;
    for (i=0;i<n;i++)
        if (ar>pin[i]) thesi++;
    for (i=n;i>thesi;i--)
        pin[i]=pin[i-1];
    pin[thesi]=ar;
    return n+1;      
}

int main(void)
{
	int test[20]={5,67,8,3,56,87,12,14,9,27},tt,i,k,n=10;
    //������� ���������� ������ test[]
    for(i=1;i<n;i++)
	{
	 for(k=n-1;k>=i;k--)
	 {
    	if(test[k]<test[k-1])
		{
          tt=test[k];
          test[k]=test[k-1];
          test[k-1]=tt;
        }
	 }
    }
    //�������� ������������� ������
    for (i=0;i<n;i++)
        printf("%d\n",test[i]);
    //��������� ��� ������� 45 ���� ������  
    n=insert(test,n,45); //� ��������� n ������� �� ��� ���� ��� ���������� � ���������
    //�������� ������
    for (i=0;i<n;i++)
        printf("%d\n",test[i]);
    
    return 0;
}

