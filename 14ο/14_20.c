#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char onoma[20],lexi[30],morse[10];
	int codes[256],i,l=0,c=0;
	FILE *in,*out; 
	printf("Onoma arxeioy gia kodikopoihsh:");
	gets(onoma);
	
	in=fopen(onoma,"r");
	out=fopen("morse.txt","w");
	if (in==NULL || out==NULL) exit(1);
	while (!feof(in))
	{
		fscanf(in,"%s",lexi);
		for (i=0;i<strlen(lexi);i++)
		{
			if (lexi[i]>='a' && lexi[i]<='z') lexi[i]=lexi[i]-32;
			switch (lexi[i])
			{
				case 'A':
					strcpy(morse,".-");
					break;
				case 'B':
					strcpy(morse,"-...");
					break;	
				case 'C':
					strcpy(morse,"-.-.");
					break;	
				case 'D':
					strcpy(morse,"-..");
					break;	
				case 'E':
					strcpy(morse,".");
					break;	
				case 'F':
					strcpy(morse,"..-.");
					break;	
				case 'G':
					strcpy(morse,"--.");
					break;	
				case 'H':
					strcpy(morse,"....");
					break;	
				case 'I':
					strcpy(morse,"..");
					break;	
				case 'J':
					strcpy(morse,".---");
					break;	
				case 'K':
					strcpy(morse,"-.-");
					break;	
				case 'L':
					strcpy(morse,".-..");
					break;	
				case 'M':
					strcpy(morse,"--");
					break;	
				case 'N':
					strcpy(morse,"-.");
					break;	
				case 'O':
					strcpy(morse,"---");
					break;	
				case 'P':
					strcpy(morse,".--.");
					break;	
				case 'Q':
					strcpy(morse,"--.-");
					break;	
				case 'R':
					strcpy(morse,".-.");
					break;	
				case 'S':
					strcpy(morse,"...");
					break;	
				case 'T':
					strcpy(morse,"-");
					break;	
				case 'U':
					strcpy(morse,"..-");
					break;	
				case 'V':
					strcpy(morse,"...-");
					break;
				case 'W':
					strcpy(morse,".--");
					break;	
				case 'X':
					strcpy(morse,"-..-");
					break;	
				case 'Y':
					strcpy(morse,"-.--");
					break;	
				case 'Z':
					strcpy(morse,"--..");
					break;
				case '0':
					strcpy(morse,"-----");
					break;	
				case '1':
					strcpy(morse,".----");
					break;	
				case '2':
					strcpy(morse,"..---");
					break;	
				case '3':
					strcpy(morse,"...--");
					break;	
				case '4':
					strcpy(morse,"....-");
					break;	
				case '5':
					strcpy(morse,".....");
					break;
				case '6':
					strcpy(morse,"-....");
					break;	
				case '7':
					strcpy(morse,"--...");
					break;	
				case '8':
					strcpy(morse,"---..");
					break;	
				case '9':
					strcpy(morse,"----.");
					break;	
			}
			c++;
			fprintf(out,"%s",morse);
			if (i!=strlen(lexi)) fprintf(out,"   ");
		}
		fprintf(out,"       ");
		l++;
	}
	fclose(in);
	fclose(out);
	printf("Kodikopoiithikan %d xaraktires se %d lexeis\n",c,l);
	return 0;
}

