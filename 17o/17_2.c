#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,ar,*pin;
	printf("Dose plithos:");
	scanf("%d",&ar);
	pin=calloc(ar,sizeof(int));
	for(i=0;i<ar;i++)
	{
		scanf("%d",&pin[i]);
	}
	// �� ��� ������� ������� � ������� pin ������� �� �������� ���� ��� ��� ����
	pin=realloc(pin,2*ar*sizeof(int)); 
    
    return 0;
}

