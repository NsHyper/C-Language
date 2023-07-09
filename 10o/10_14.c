#include <stdio.h>
#include <stdlib.h>

void do_it(char ch, int y);

int main(void)
{
  do_it('*',20);

  return 0;
}

void do_it(char ch, int y)
{
	int i;
	for (i=1;i<=y;i++) printf("%c",ch);
	putchar('\n');
}

