#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

void common(char pin1[], char pin2[]);
void del(char pin1[],char pin2[]);
int find(char pin1[], char pin2[]);

int main(void)
{
	char lexi1[40]="Arnaki aspro kai paxi", lexi2[40]="tis manas toy kamari";
    common(lexi1,lexi2); //Εμφάνιση κοινων χαρακτήρων των δυο λέξεων
    del(lexi1,lexi2);    //Διαγραφή των χαρακτήρων της lexi2 από τη lexi1
    puts(lexi1);
    printf("to brika sti thesi %d\n",find(lexi1,"po")); //Εντοπίζει τους χαρακτήρες "po" μεσα στον lexi1, όπως εχει διαμορφωθεί απο την del()
	return 0;
}

void common(char pin1[], char pin2[])
{
	char koina[80]="";
	int i,j,k,found;
	for(i=0;i<strlen(pin1);i++)
	{
		for(j=0;j<strlen(pin2);j++)
		{
			found=0;			
			if(pin1[i]==pin2[j])
			{
					for(k=0;k<strlen(koina);k++)
						if(pin1[i]==koina[k]) found=1;
					if(!found)
					{
						koina[strlen(koina)]=pin1[i];
						koina[strlen(koina)+1]='\0';
					}	
			}			
		}
	}
	puts(koina);
}

void del(char pin1[],char pin2[])
{
	int i,j,k;
	for(i=0;i<strlen(pin1);i++)
	{
		for(j=0;j<strlen(pin2);j++)
		{
			if(pin1[i]==pin2[j])
			{
					for(k=i;k<strlen(pin1);k++)
						pin1[k]=pin1[k+1];
					
			}			
		}
	}
}

int find(char pin1[], char pin2[])
{
	int i,j,k,found;
	for(i=0;i<strlen(pin1);i++)
	{
		found=i+1;
		for(j=0;j<strlen(pin2);j++)
		{
			if(pin1[i+j]!=pin2[j])
			{
				found=0;	
				break;		
			}
		}
		if(found) return found;
	}
	return 0;
}

