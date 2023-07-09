#include <stdio.h>
void ta_panta_ola(int ar, int *mn, int *mx, int *sm, int *pl);

int main(void)
{
	int a,mikro,megalo,athroisma,plithos;
	scanf("%d",&a);
	ta_panta_ola(a,&mikro,&megalo,&athroisma,&plithos);
	printf("Mikrotero=%d Megalytero=%d Atroisma=%d Plithos=%d\n",mikro,megalo,athroisma,plithos);
	return 0;
}

void ta_panta_ola(int ar, int *mn, int *mx, int *sm, int *pl)
{
	int ps,meg,mik,ath,y,cnt;
	meg=0;
	mik=9;
	ath=0;
	cnt=0;
	do
	{
		y=ar % 10;
		if (y>meg) meg=y;
		if (y<mik) mik=y;
		ath=ath+y;
		ar= ar/10;
		cnt++;
	} while (ar>0);
	*mn=mik;
	*mx=meg;
	*sm=ath;
	*pl=cnt;
}
